// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ROOTFilePB.proto

#include "ROOTFilePB.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_ROOTFilePB_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0>
    scc_info_ROOTFilePB_Histo_ROOTFilePB_2eproto;
namespace dqmstorepb {
  class ROOTFilePB_HistoDefaultTypeInternal {
  public:
    ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ROOTFilePB_Histo> _instance;
  } _ROOTFilePB_Histo_default_instance_;
  class ROOTFilePBDefaultTypeInternal {
  public:
    ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ROOTFilePB> _instance;
  } _ROOTFilePB_default_instance_;
}  // namespace dqmstorepb
static void InitDefaultsscc_info_ROOTFilePB_ROOTFilePB_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::dqmstorepb::_ROOTFilePB_default_instance_;
    new (ptr)::dqmstorepb::ROOTFilePB();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::dqmstorepb::ROOTFilePB::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_ROOTFilePB_ROOTFilePB_2eproto = {
    {ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized),
     1,
     InitDefaultsscc_info_ROOTFilePB_ROOTFilePB_2eproto},
    {
        &scc_info_ROOTFilePB_Histo_ROOTFilePB_2eproto.base,
    }};

static void InitDefaultsscc_info_ROOTFilePB_Histo_ROOTFilePB_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::dqmstorepb::_ROOTFilePB_Histo_default_instance_;
    new (ptr)::dqmstorepb::ROOTFilePB_Histo();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::dqmstorepb::ROOTFilePB_Histo::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ROOTFilePB_Histo_ROOTFilePB_2eproto = {
    {ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized),
     0,
     InitDefaultsscc_info_ROOTFilePB_Histo_ROOTFilePB_2eproto},
    {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ROOTFilePB_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_ROOTFilePB_2eproto =
    nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ROOTFilePB_2eproto =
    nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ROOTFilePB_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::dqmstorepb::ROOTFilePB_Histo, _has_bits_),
    PROTOBUF_FIELD_OFFSET(::dqmstorepb::ROOTFilePB_Histo, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    PROTOBUF_FIELD_OFFSET(::dqmstorepb::ROOTFilePB_Histo, full_pathname_),
    PROTOBUF_FIELD_OFFSET(::dqmstorepb::ROOTFilePB_Histo, size_),
    PROTOBUF_FIELD_OFFSET(::dqmstorepb::ROOTFilePB_Histo, streamed_histo_),
    PROTOBUF_FIELD_OFFSET(::dqmstorepb::ROOTFilePB_Histo, flags_),
    0,
    2,
    1,
    3,
    PROTOBUF_FIELD_OFFSET(::dqmstorepb::ROOTFilePB, _has_bits_),
    PROTOBUF_FIELD_OFFSET(::dqmstorepb::ROOTFilePB, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    PROTOBUF_FIELD_OFFSET(::dqmstorepb::ROOTFilePB, histo_),
    ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    {0, 9, sizeof(::dqmstorepb::ROOTFilePB_Histo)},
    {13, 19, sizeof(::dqmstorepb::ROOTFilePB)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const* const file_default_instances[] = {
    reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::dqmstorepb::_ROOTFilePB_Histo_default_instance_),
    reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::dqmstorepb::_ROOTFilePB_default_instance_),
};

const char descriptor_table_protodef_ROOTFilePB_2eproto[] =
    "\n\020ROOTFilePB.proto\022\ndqmstorepb\"\216\001\n\nROOTF"
    "ilePB\022+\n\005histo\030\001 \003(\0132\034.dqmstorepb.ROOTFi"
    "lePB.Histo\032S\n\005Histo\022\025\n\rfull_pathname\030\001 \002"
    "(\t\022\014\n\004size\030\002 \002(\r\022\026\n\016streamed_histo\030\003 \002(\014"
    "\022\r\n\005flags\030\004 \002(\r";
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* const descriptor_table_ROOTFilePB_2eproto_deps[1] = {};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase* const descriptor_table_ROOTFilePB_2eproto_sccs[2] = {
    &scc_info_ROOTFilePB_ROOTFilePB_2eproto.base,
    &scc_info_ROOTFilePB_Histo_ROOTFilePB_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ROOTFilePB_2eproto_once;
static bool descriptor_table_ROOTFilePB_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ROOTFilePB_2eproto = {
    &descriptor_table_ROOTFilePB_2eproto_initialized,
    descriptor_table_protodef_ROOTFilePB_2eproto,
    "ROOTFilePB.proto",
    175,
    &descriptor_table_ROOTFilePB_2eproto_once,
    descriptor_table_ROOTFilePB_2eproto_sccs,
    descriptor_table_ROOTFilePB_2eproto_deps,
    2,
    0,
    schemas,
    file_default_instances,
    TableStruct_ROOTFilePB_2eproto::offsets,
    file_level_metadata_ROOTFilePB_2eproto,
    2,
    file_level_enum_descriptors_ROOTFilePB_2eproto,
    file_level_service_descriptors_ROOTFilePB_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_ROOTFilePB_2eproto =
    (::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_ROOTFilePB_2eproto), true);
namespace dqmstorepb {

  // ===================================================================

  void ROOTFilePB_Histo::InitAsDefaultInstance() {}
  class ROOTFilePB_Histo::HasBitSetters {
  public:
    using HasBits = decltype(std::declval<ROOTFilePB_Histo>()._has_bits_);
    static void set_has_full_pathname(HasBits* has_bits) { (*has_bits)[0] |= 1u; }
    static void set_has_size(HasBits* has_bits) { (*has_bits)[0] |= 4u; }
    static void set_has_streamed_histo(HasBits* has_bits) { (*has_bits)[0] |= 2u; }
    static void set_has_flags(HasBits* has_bits) { (*has_bits)[0] |= 8u; }
  };

#if !defined(_MSC_VER) || _MSC_VER >= 1900
  const int ROOTFilePB_Histo::kFullPathnameFieldNumber;
  const int ROOTFilePB_Histo::kSizeFieldNumber;
  const int ROOTFilePB_Histo::kStreamedHistoFieldNumber;
  const int ROOTFilePB_Histo::kFlagsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

  ROOTFilePB_Histo::ROOTFilePB_Histo() : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
    SharedCtor();
    // @@protoc_insertion_point(constructor:dqmstorepb.ROOTFilePB.Histo)
  }
  ROOTFilePB_Histo::ROOTFilePB_Histo(const ROOTFilePB_Histo& from)
      : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr), _has_bits_(from._has_bits_) {
    _internal_metadata_.MergeFrom(from._internal_metadata_);
    full_pathname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
    if (from.has_full_pathname()) {
      full_pathname_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
                                       from.full_pathname_);
    }
    streamed_histo_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
    if (from.has_streamed_histo()) {
      streamed_histo_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
                                        from.streamed_histo_);
    }
    ::memcpy(&size_,
             &from.size_,
             static_cast<size_t>(reinterpret_cast<char*>(&flags_) - reinterpret_cast<char*>(&size_)) + sizeof(flags_));
    // @@protoc_insertion_point(copy_constructor:dqmstorepb.ROOTFilePB.Histo)
  }

  void ROOTFilePB_Histo::SharedCtor() {
    ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ROOTFilePB_Histo_ROOTFilePB_2eproto.base);
    full_pathname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
    streamed_histo_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
    ::memset(&size_,
             0,
             static_cast<size_t>(reinterpret_cast<char*>(&flags_) - reinterpret_cast<char*>(&size_)) + sizeof(flags_));
  }

  ROOTFilePB_Histo::~ROOTFilePB_Histo() {
    // @@protoc_insertion_point(destructor:dqmstorepb.ROOTFilePB.Histo)
    SharedDtor();
  }

  void ROOTFilePB_Histo::SharedDtor() {
    full_pathname_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
    streamed_histo_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  }

  void ROOTFilePB_Histo::SetCachedSize(int size) const { _cached_size_.Set(size); }
  const ROOTFilePB_Histo& ROOTFilePB_Histo::default_instance() {
    ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ROOTFilePB_Histo_ROOTFilePB_2eproto.base);
    return *internal_default_instance();
  }

  void ROOTFilePB_Histo::Clear() {
    // @@protoc_insertion_point(message_clear_start:dqmstorepb.ROOTFilePB.Histo)
    ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    cached_has_bits = _has_bits_[0];
    if (cached_has_bits & 0x00000003u) {
      if (cached_has_bits & 0x00000001u) {
        full_pathname_.ClearNonDefaultToEmptyNoArena();
      }
      if (cached_has_bits & 0x00000002u) {
        streamed_histo_.ClearNonDefaultToEmptyNoArena();
      }
    }
    if (cached_has_bits & 0x0000000cu) {
      ::memset(
          &size_,
          0,
          static_cast<size_t>(reinterpret_cast<char*>(&flags_) - reinterpret_cast<char*>(&size_)) + sizeof(flags_));
    }
    _has_bits_.Clear();
    _internal_metadata_.Clear();
  }

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* ROOTFilePB_Histo::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x)                     \
  if (PROTOBUF_PREDICT_FALSE(!(x))) \
  goto failure
    HasBitSetters::HasBits has_bits{};
    while (!ctx->Done(&ptr)) {
      ::PROTOBUF_NAMESPACE_ID::uint32 tag;
      ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
      CHK_(ptr);
      switch (tag >> 3) {
        // required string full_pathname = 1;
        case 1:
          if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8Verify(
                mutable_full_pathname(), ptr, ctx, "dqmstorepb.ROOTFilePB.Histo.full_pathname");
            CHK_(ptr);
          } else
            goto handle_unusual;
          continue;
        // required uint32 size = 2;
        case 2:
          if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
            HasBitSetters::set_has_size(&has_bits);
            size_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
            CHK_(ptr);
          } else
            goto handle_unusual;
          continue;
        // required bytes streamed_histo = 3;
        case 3:
          if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(mutable_streamed_histo(), ptr, ctx);
            CHK_(ptr);
          } else
            goto handle_unusual;
          continue;
        // required uint32 flags = 4;
        case 4:
          if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
            HasBitSetters::set_has_flags(&has_bits);
            flags_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
            CHK_(ptr);
          } else
            goto handle_unusual;
          continue;
        default: {
        handle_unusual:
          if ((tag & 7) == 4 || tag == 0) {
            ctx->SetLastTag(tag);
            goto success;
          }
          ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
          CHK_(ptr != nullptr);
          continue;
        }
      }  // switch
    }    // while
  success:
    _has_bits_.Or(has_bits);
    return ptr;
  failure:
    ptr = nullptr;
    goto success;
#undef CHK_
  }
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  bool ROOTFilePB_Histo::MergePartialFromCodedStream(::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION)                   \
  if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) \
  goto failure
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    // @@protoc_insertion_point(parse_start:dqmstorepb.ROOTFilePB.Histo)
    for (;;) {
      ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
      tag = p.first;
      if (!p.second)
        goto handle_unusual;
      switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
        // required string full_pathname = 1;
        case 1: {
          if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
            DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(input, this->mutable_full_pathname()));
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
                this->full_pathname().data(),
                static_cast<int>(this->full_pathname().length()),
                ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::PARSE,
                "dqmstorepb.ROOTFilePB.Histo.full_pathname");
          } else {
            goto handle_unusual;
          }
          break;
        }

        // required uint32 size = 2;
        case 2: {
          if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (16 & 0xFF)) {
            HasBitSetters::set_has_size(&_has_bits_);
            DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                 ::PROTOBUF_NAMESPACE_ID::uint32,
                 ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(input, &size_)));
          } else {
            goto handle_unusual;
          }
          break;
        }

        // required bytes streamed_histo = 3;
        case 3: {
          if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (26 & 0xFF)) {
            DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadBytes(input, this->mutable_streamed_histo()));
          } else {
            goto handle_unusual;
          }
          break;
        }

        // required uint32 flags = 4;
        case 4: {
          if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (32 & 0xFF)) {
            HasBitSetters::set_has_flags(&_has_bits_);
            DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                 ::PROTOBUF_NAMESPACE_ID::uint32,
                 ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(input, &flags_)));
          } else {
            goto handle_unusual;
          }
          break;
        }

        default: {
        handle_unusual:
          if (tag == 0) {
            goto success;
          }
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
          break;
        }
      }
    }
  success:
    // @@protoc_insertion_point(parse_success:dqmstorepb.ROOTFilePB.Histo)
    return true;
  failure:
    // @@protoc_insertion_point(parse_failure:dqmstorepb.ROOTFilePB.Histo)
    return false;
#undef DO_
  }
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

  void ROOTFilePB_Histo::SerializeWithCachedSizes(::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
    // @@protoc_insertion_point(serialize_start:dqmstorepb.ROOTFilePB.Histo)
    ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
    (void)cached_has_bits;

    cached_has_bits = _has_bits_[0];
    // required string full_pathname = 1;
    if (cached_has_bits & 0x00000001u) {
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
          this->full_pathname().data(),
          static_cast<int>(this->full_pathname().length()),
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
          "dqmstorepb.ROOTFilePB.Histo.full_pathname");
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(1, this->full_pathname(), output);
    }

    // required uint32 size = 2;
    if (cached_has_bits & 0x00000004u) {
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32(2, this->size(), output);
    }

    // required bytes streamed_histo = 3;
    if (cached_has_bits & 0x00000002u) {
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBytesMaybeAliased(3, this->streamed_histo(), output);
    }

    // required uint32 flags = 4;
    if (cached_has_bits & 0x00000008u) {
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32(4, this->flags(), output);
    }

    if (_internal_metadata_.have_unknown_fields()) {
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(_internal_metadata_.unknown_fields(),
                                                                            output);
    }
    // @@protoc_insertion_point(serialize_end:dqmstorepb.ROOTFilePB.Histo)
  }

  ::PROTOBUF_NAMESPACE_ID::uint8* ROOTFilePB_Histo::InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
    // @@protoc_insertion_point(serialize_to_array_start:dqmstorepb.ROOTFilePB.Histo)
    ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
    (void)cached_has_bits;

    cached_has_bits = _has_bits_[0];
    // required string full_pathname = 1;
    if (cached_has_bits & 0x00000001u) {
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
          this->full_pathname().data(),
          static_cast<int>(this->full_pathname().length()),
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
          "dqmstorepb.ROOTFilePB.Histo.full_pathname");
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(1, this->full_pathname(), target);
    }

    // required uint32 size = 2;
    if (cached_has_bits & 0x00000004u) {
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->size(), target);
    }

    // required bytes streamed_histo = 3;
    if (cached_has_bits & 0x00000002u) {
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBytesToArray(3, this->streamed_histo(), target);
    }

    // required uint32 flags = 4;
    if (cached_has_bits & 0x00000008u) {
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(4, this->flags(), target);
    }

    if (_internal_metadata_.have_unknown_fields()) {
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
          _internal_metadata_.unknown_fields(), target);
    }
    // @@protoc_insertion_point(serialize_to_array_end:dqmstorepb.ROOTFilePB.Histo)
    return target;
  }

  size_t ROOTFilePB_Histo::RequiredFieldsByteSizeFallback() const {
    // @@protoc_insertion_point(required_fields_byte_size_fallback_start:dqmstorepb.ROOTFilePB.Histo)
    size_t total_size = 0;

    if (has_full_pathname()) {
      // required string full_pathname = 1;
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(this->full_pathname());
    }

    if (has_streamed_histo()) {
      // required bytes streamed_histo = 3;
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(this->streamed_histo());
    }

    if (has_size()) {
      // required uint32 size = 2;
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(this->size());
    }

    if (has_flags()) {
      // required uint32 flags = 4;
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(this->flags());
    }

    return total_size;
  }
  size_t ROOTFilePB_Histo::ByteSizeLong() const {
    // @@protoc_insertion_point(message_byte_size_start:dqmstorepb.ROOTFilePB.Histo)
    size_t total_size = 0;

    if (_internal_metadata_.have_unknown_fields()) {
      total_size +=
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(_internal_metadata_.unknown_fields());
    }
    if (((_has_bits_[0] & 0x0000000f) ^ 0x0000000f) == 0) {  // All required fields are present.
      // required string full_pathname = 1;
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(this->full_pathname());

      // required bytes streamed_histo = 3;
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(this->streamed_histo());

      // required uint32 size = 2;
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(this->size());

      // required uint32 flags = 4;
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(this->flags());

    } else {
      total_size += RequiredFieldsByteSizeFallback();
    }
    ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
    SetCachedSize(cached_size);
    return total_size;
  }

  void ROOTFilePB_Histo::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
    // @@protoc_insertion_point(generalized_merge_from_start:dqmstorepb.ROOTFilePB.Histo)
    GOOGLE_DCHECK_NE(&from, this);
    const ROOTFilePB_Histo* source = ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ROOTFilePB_Histo>(&from);
    if (source == nullptr) {
      // @@protoc_insertion_point(generalized_merge_from_cast_fail:dqmstorepb.ROOTFilePB.Histo)
      ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
    } else {
      // @@protoc_insertion_point(generalized_merge_from_cast_success:dqmstorepb.ROOTFilePB.Histo)
      MergeFrom(*source);
    }
  }

  void ROOTFilePB_Histo::MergeFrom(const ROOTFilePB_Histo& from) {
    // @@protoc_insertion_point(class_specific_merge_from_start:dqmstorepb.ROOTFilePB.Histo)
    GOOGLE_DCHECK_NE(&from, this);
    _internal_metadata_.MergeFrom(from._internal_metadata_);
    ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
    (void)cached_has_bits;

    cached_has_bits = from._has_bits_[0];
    if (cached_has_bits & 0x0000000fu) {
      if (cached_has_bits & 0x00000001u) {
        _has_bits_[0] |= 0x00000001u;
        full_pathname_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
                                         from.full_pathname_);
      }
      if (cached_has_bits & 0x00000002u) {
        _has_bits_[0] |= 0x00000002u;
        streamed_histo_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
                                          from.streamed_histo_);
      }
      if (cached_has_bits & 0x00000004u) {
        size_ = from.size_;
      }
      if (cached_has_bits & 0x00000008u) {
        flags_ = from.flags_;
      }
      _has_bits_[0] |= cached_has_bits;
    }
  }

  void ROOTFilePB_Histo::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
    // @@protoc_insertion_point(generalized_copy_from_start:dqmstorepb.ROOTFilePB.Histo)
    if (&from == this)
      return;
    Clear();
    MergeFrom(from);
  }

  void ROOTFilePB_Histo::CopyFrom(const ROOTFilePB_Histo& from) {
    // @@protoc_insertion_point(class_specific_copy_from_start:dqmstorepb.ROOTFilePB.Histo)
    if (&from == this)
      return;
    Clear();
    MergeFrom(from);
  }

  bool ROOTFilePB_Histo::IsInitialized() const {
    if ((_has_bits_[0] & 0x0000000f) != 0x0000000f)
      return false;
    return true;
  }

  void ROOTFilePB_Histo::Swap(ROOTFilePB_Histo* other) {
    if (other == this)
      return;
    InternalSwap(other);
  }
  void ROOTFilePB_Histo::InternalSwap(ROOTFilePB_Histo* other) {
    using std::swap;
    _internal_metadata_.Swap(&other->_internal_metadata_);
    swap(_has_bits_[0], other->_has_bits_[0]);
    full_pathname_.Swap(
        &other->full_pathname_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
    streamed_histo_.Swap(&other->streamed_histo_,
                         &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
                         GetArenaNoVirtual());
    swap(size_, other->size_);
    swap(flags_, other->flags_);
  }

  ::PROTOBUF_NAMESPACE_ID::Metadata ROOTFilePB_Histo::GetMetadata() const { return GetMetadataStatic(); }

  // ===================================================================

  void ROOTFilePB::InitAsDefaultInstance() {}
  class ROOTFilePB::HasBitSetters {
  public:
    using HasBits = decltype(std::declval<ROOTFilePB>()._has_bits_);
  };

#if !defined(_MSC_VER) || _MSC_VER >= 1900
  const int ROOTFilePB::kHistoFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

  ROOTFilePB::ROOTFilePB() : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
    SharedCtor();
    // @@protoc_insertion_point(constructor:dqmstorepb.ROOTFilePB)
  }
  ROOTFilePB::ROOTFilePB(const ROOTFilePB& from)
      : ::PROTOBUF_NAMESPACE_ID::Message(),
        _internal_metadata_(nullptr),
        _has_bits_(from._has_bits_),
        histo_(from.histo_) {
    _internal_metadata_.MergeFrom(from._internal_metadata_);
    // @@protoc_insertion_point(copy_constructor:dqmstorepb.ROOTFilePB)
  }

  void ROOTFilePB::SharedCtor() {
    ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ROOTFilePB_ROOTFilePB_2eproto.base);
  }

  ROOTFilePB::~ROOTFilePB() {
    // @@protoc_insertion_point(destructor:dqmstorepb.ROOTFilePB)
    SharedDtor();
  }

  void ROOTFilePB::SharedDtor() {}

  void ROOTFilePB::SetCachedSize(int size) const { _cached_size_.Set(size); }
  const ROOTFilePB& ROOTFilePB::default_instance() {
    ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ROOTFilePB_ROOTFilePB_2eproto.base);
    return *internal_default_instance();
  }

  void ROOTFilePB::Clear() {
    // @@protoc_insertion_point(message_clear_start:dqmstorepb.ROOTFilePB)
    ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    histo_.Clear();
    _has_bits_.Clear();
    _internal_metadata_.Clear();
  }

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* ROOTFilePB::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x)                     \
  if (PROTOBUF_PREDICT_FALSE(!(x))) \
  goto failure
    while (!ctx->Done(&ptr)) {
      ::PROTOBUF_NAMESPACE_ID::uint32 tag;
      ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
      CHK_(ptr);
      switch (tag >> 3) {
        // repeated .dqmstorepb.ROOTFilePB.Histo histo = 1;
        case 1:
          if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
            ptr -= 1;
            do {
              ptr += 1;
              ptr = ctx->ParseMessage(add_histo(), ptr);
              CHK_(ptr);
              if (!ctx->DataAvailable(ptr))
                break;
            } while (::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<::PROTOBUF_NAMESPACE_ID::uint8>(ptr) == 10);
          } else
            goto handle_unusual;
          continue;
        default: {
        handle_unusual:
          if ((tag & 7) == 4 || tag == 0) {
            ctx->SetLastTag(tag);
            goto success;
          }
          ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
          CHK_(ptr != nullptr);
          continue;
        }
      }  // switch
    }    // while
  success:
    return ptr;
  failure:
    ptr = nullptr;
    goto success;
#undef CHK_
  }
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  bool ROOTFilePB::MergePartialFromCodedStream(::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION)                   \
  if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) \
  goto failure
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    // @@protoc_insertion_point(parse_start:dqmstorepb.ROOTFilePB)
    for (;;) {
      ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
      tag = p.first;
      if (!p.second)
        goto handle_unusual;
      switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
        // repeated .dqmstorepb.ROOTFilePB.Histo histo = 1;
        case 1: {
          if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
            DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(input, add_histo()));
          } else {
            goto handle_unusual;
          }
          break;
        }

        default: {
        handle_unusual:
          if (tag == 0) {
            goto success;
          }
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
          break;
        }
      }
    }
  success:
    // @@protoc_insertion_point(parse_success:dqmstorepb.ROOTFilePB)
    return true;
  failure:
    // @@protoc_insertion_point(parse_failure:dqmstorepb.ROOTFilePB)
    return false;
#undef DO_
  }
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

  void ROOTFilePB::SerializeWithCachedSizes(::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
    // @@protoc_insertion_point(serialize_start:dqmstorepb.ROOTFilePB)
    ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
    (void)cached_has_bits;

    // repeated .dqmstorepb.ROOTFilePB.Histo histo = 1;
    for (unsigned int i = 0, n = static_cast<unsigned int>(this->histo_size()); i < n; i++) {
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
          1, this->histo(static_cast<int>(i)), output);
    }

    if (_internal_metadata_.have_unknown_fields()) {
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(_internal_metadata_.unknown_fields(),
                                                                            output);
    }
    // @@protoc_insertion_point(serialize_end:dqmstorepb.ROOTFilePB)
  }

  ::PROTOBUF_NAMESPACE_ID::uint8* ROOTFilePB::InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
    // @@protoc_insertion_point(serialize_to_array_start:dqmstorepb.ROOTFilePB)
    ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
    (void)cached_has_bits;

    // repeated .dqmstorepb.ROOTFilePB.Histo histo = 1;
    for (unsigned int i = 0, n = static_cast<unsigned int>(this->histo_size()); i < n; i++) {
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::InternalWriteMessageToArray(
          1, this->histo(static_cast<int>(i)), target);
    }

    if (_internal_metadata_.have_unknown_fields()) {
      target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
          _internal_metadata_.unknown_fields(), target);
    }
    // @@protoc_insertion_point(serialize_to_array_end:dqmstorepb.ROOTFilePB)
    return target;
  }

  size_t ROOTFilePB::ByteSizeLong() const {
    // @@protoc_insertion_point(message_byte_size_start:dqmstorepb.ROOTFilePB)
    size_t total_size = 0;

    if (_internal_metadata_.have_unknown_fields()) {
      total_size +=
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(_internal_metadata_.unknown_fields());
    }
    ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
    // Prevent compiler warnings about cached_has_bits being unused
    (void)cached_has_bits;

    // repeated .dqmstorepb.ROOTFilePB.Histo histo = 1;
    {
      unsigned int count = static_cast<unsigned int>(this->histo_size());
      total_size += 1UL * count;
      for (unsigned int i = 0; i < count; i++) {
        total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(this->histo(static_cast<int>(i)));
      }
    }

    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
    SetCachedSize(cached_size);
    return total_size;
  }

  void ROOTFilePB::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
    // @@protoc_insertion_point(generalized_merge_from_start:dqmstorepb.ROOTFilePB)
    GOOGLE_DCHECK_NE(&from, this);
    const ROOTFilePB* source = ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ROOTFilePB>(&from);
    if (source == nullptr) {
      // @@protoc_insertion_point(generalized_merge_from_cast_fail:dqmstorepb.ROOTFilePB)
      ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
    } else {
      // @@protoc_insertion_point(generalized_merge_from_cast_success:dqmstorepb.ROOTFilePB)
      MergeFrom(*source);
    }
  }

  void ROOTFilePB::MergeFrom(const ROOTFilePB& from) {
    // @@protoc_insertion_point(class_specific_merge_from_start:dqmstorepb.ROOTFilePB)
    GOOGLE_DCHECK_NE(&from, this);
    _internal_metadata_.MergeFrom(from._internal_metadata_);
    ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
    (void)cached_has_bits;

    histo_.MergeFrom(from.histo_);
  }

  void ROOTFilePB::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
    // @@protoc_insertion_point(generalized_copy_from_start:dqmstorepb.ROOTFilePB)
    if (&from == this)
      return;
    Clear();
    MergeFrom(from);
  }

  void ROOTFilePB::CopyFrom(const ROOTFilePB& from) {
    // @@protoc_insertion_point(class_specific_copy_from_start:dqmstorepb.ROOTFilePB)
    if (&from == this)
      return;
    Clear();
    MergeFrom(from);
  }

  bool ROOTFilePB::IsInitialized() const {
    if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(this->histo()))
      return false;
    return true;
  }

  void ROOTFilePB::Swap(ROOTFilePB* other) {
    if (other == this)
      return;
    InternalSwap(other);
  }
  void ROOTFilePB::InternalSwap(ROOTFilePB* other) {
    using std::swap;
    _internal_metadata_.Swap(&other->_internal_metadata_);
    swap(_has_bits_[0], other->_has_bits_[0]);
    CastToBase(&histo_)->InternalSwap(CastToBase(&other->histo_));
  }

  ::PROTOBUF_NAMESPACE_ID::Metadata ROOTFilePB::GetMetadata() const { return GetMetadataStatic(); }

  // @@protoc_insertion_point(namespace_scope)
}  // namespace dqmstorepb
PROTOBUF_NAMESPACE_OPEN
template <>
PROTOBUF_NOINLINE ::dqmstorepb::ROOTFilePB_Histo* Arena::CreateMaybeMessage<::dqmstorepb::ROOTFilePB_Histo>(
    Arena* arena) {
  return Arena::CreateInternal<::dqmstorepb::ROOTFilePB_Histo>(arena);
}
template <>
PROTOBUF_NOINLINE ::dqmstorepb::ROOTFilePB* Arena::CreateMaybeMessage<::dqmstorepb::ROOTFilePB>(Arena* arena) {
  return Arena::CreateInternal<::dqmstorepb::ROOTFilePB>(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
