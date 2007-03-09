#ifndef CandAlgos_ObjectRefVectorSelector_h
#define CandAlgos_ObjectRefVectorSelector_h
/* \class RefVectorRefVectorStoreMananger
 *
 * \author Luca Lista, INFN
 *
 */
#include "PhysicsTools/UtilAlgos/interface/ObjectSelector.h"
#include "DataFormats/Common/interface/RefVector.h"

template<typename Selector, 
	 typename OutputCollection = edm::RefVector<typename Selector::collection>,
	 typename SizeSelector = NonNullNumberSelector,
         typename PostProcessor = reco::helpers::NullPostProcessor<OutputCollection> >
class ObjectRefVectorSelector : 
  public ObjectSelector<Selector, OutputCollection, SizeSelector, PostProcessor> {
public:
  explicit ObjectRefVectorSelector( const edm::ParameterSet & cfg ) :
    ObjectSelector<Selector, OutputCollection, SizeSelector, PostProcessor>( cfg ) { }
};

#endif
