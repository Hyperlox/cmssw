#include "BTLDetLayerGeometryBuilder.h"

#include <DataFormats/ForwardDetId/interface/BTLDetId.h>
#include <Geometry/CommonDetUnit/interface/GeomDet.h>
#include <RecoMTD/DetLayers/interface/MTDTrayBarrelLayer.h>
#include <RecoMTD/DetLayers/interface/MTDDetTray.h>

#include <Utilities/General/interface/precomputed_value_sort.h>
#include <Geometry/CommonDetUnit/interface/DetSorting.h>

#include <FWCore/MessageLogger/interface/MessageLogger.h>

#include <iostream>

//#define EDM_ML_DEBUG

using namespace std;

BTLDetLayerGeometryBuilder::BTLDetLayerGeometryBuilder() {}

BTLDetLayerGeometryBuilder::~BTLDetLayerGeometryBuilder() {}

vector<DetLayer*> BTLDetLayerGeometryBuilder::buildLayers(const MTDGeometry& geo) {
  const std::string theMetname_ = "MTD|RecoMTD|RecoMTDDetLayers|BTLDetLayerGeometryBuilder";

  vector<DetLayer*> detlayers;
  vector<MTDTrayBarrelLayer*> result;

  vector<const DetRod*> btlDetTrays;

  for (unsigned tray = BTLDetId::MIN_ROD; tray <= BTLDetId::HALF_ROD; ++tray) {
    vector<const GeomDet*> geomDets;
    for (unsigned module = 1; module <= BTLDetId::kModulesPerROD; ++module) {
      for (unsigned side = 0; side <= 1; ++side) {
        const GeomDet* geomDet = geo.idToDet(BTLDetId(side, tray, module, 0, 1));
        if (geomDet != nullptr) {
          geomDets.push_back(geomDet);
#ifdef EDM_ML_DEBUG
          edm::LogVerbatim(theMetname_) << "get BTL module " << std::hex << BTLDetId(side, tray, module, 0, 1).rawId()
                                    << std::dec << " at R=" << geomDet->position().perp()
                                    << ", phi=" << geomDet->position().phi();
#endif
        }
      }
    }

    if (!geomDets.empty()) {
      precomputed_value_sort(geomDets.begin(), geomDets.end(), geomsort::DetZ());
      btlDetTrays.push_back(new MTDDetTray(geomDets));
#ifdef EDM_ML_DEBUG
      edm::LogVerbatim(theMetname_) << "  New BTLDetTray with " << geomDets.size()
                                << " modules at R=" << btlDetTrays.back()->position().perp()
                                << ", phi=" << btlDetTrays.back()->position().phi();
#endif
    }
  }

  precomputed_value_sort(btlDetTrays.begin(), btlDetTrays.end(), geomsort::ExtractPhi<GeometricSearchDet, float>());
  result.push_back(new MTDTrayBarrelLayer(btlDetTrays));
#ifdef EDM_ML_DEBUG
  edm::LogVerbatim(theMetname_) << "BTLDetLayerGeometryBuilder: "
                            << "    New MTDTrayBarrelLayer with " << btlDetTrays.size() << " rods, at R "
                            << result.back()->specificSurface().radius();
#endif

  for (vector<MTDTrayBarrelLayer*>::const_iterator it = result.begin(); it != result.end(); it++)
    detlayers.push_back((DetLayer*)(*it));

  return detlayers;
}
