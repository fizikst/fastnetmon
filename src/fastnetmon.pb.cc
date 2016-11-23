// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: fastnetmon.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "fastnetmon.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace fastmitigation {

namespace {

const ::google::protobuf::Descriptor* BanListRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BanListRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* BanListReply_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BanListReply_reflection_ = NULL;
const ::google::protobuf::Descriptor* ExecuteBanRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ExecuteBanRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* ExecuteBanReply_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ExecuteBanReply_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_fastnetmon_2eproto() {
  protobuf_AddDesc_fastnetmon_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "fastnetmon.proto");
  GOOGLE_CHECK(file != NULL);
  BanListRequest_descriptor_ = file->message_type(0);
  static const int BanListRequest_offsets_[1] = {
  };
  BanListRequest_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      BanListRequest_descriptor_,
      BanListRequest::default_instance_,
      BanListRequest_offsets_,
      -1,
      -1,
      -1,
      sizeof(BanListRequest),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BanListRequest, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BanListRequest, _is_default_instance_));
  BanListReply_descriptor_ = file->message_type(1);
  static const int BanListReply_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BanListReply, ip_address_),
  };
  BanListReply_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      BanListReply_descriptor_,
      BanListReply::default_instance_,
      BanListReply_offsets_,
      -1,
      -1,
      -1,
      sizeof(BanListReply),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BanListReply, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BanListReply, _is_default_instance_));
  ExecuteBanRequest_descriptor_ = file->message_type(2);
  static const int ExecuteBanRequest_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExecuteBanRequest, ip_address_),
  };
  ExecuteBanRequest_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ExecuteBanRequest_descriptor_,
      ExecuteBanRequest::default_instance_,
      ExecuteBanRequest_offsets_,
      -1,
      -1,
      -1,
      sizeof(ExecuteBanRequest),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExecuteBanRequest, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExecuteBanRequest, _is_default_instance_));
  ExecuteBanReply_descriptor_ = file->message_type(3);
  static const int ExecuteBanReply_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExecuteBanReply, result_),
  };
  ExecuteBanReply_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ExecuteBanReply_descriptor_,
      ExecuteBanReply::default_instance_,
      ExecuteBanReply_offsets_,
      -1,
      -1,
      -1,
      sizeof(ExecuteBanReply),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExecuteBanReply, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExecuteBanReply, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_fastnetmon_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      BanListRequest_descriptor_, &BanListRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      BanListReply_descriptor_, &BanListReply::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ExecuteBanRequest_descriptor_, &ExecuteBanRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ExecuteBanReply_descriptor_, &ExecuteBanReply::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_fastnetmon_2eproto() {
  delete BanListRequest::default_instance_;
  delete BanListRequest_reflection_;
  delete BanListReply::default_instance_;
  delete BanListReply_reflection_;
  delete ExecuteBanRequest::default_instance_;
  delete ExecuteBanRequest_reflection_;
  delete ExecuteBanReply::default_instance_;
  delete ExecuteBanReply_reflection_;
}

void protobuf_AddDesc_fastnetmon_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020fastnetmon.proto\022\016fastmitigation\"\020\n\016Ba"
    "nListRequest\"\"\n\014BanListReply\022\022\n\nip_addre"
    "ss\030\001 \001(\t\"\'\n\021ExecuteBanRequest\022\022\n\nip_addr"
    "ess\030\001 \001(\t\"!\n\017ExecuteBanReply\022\016\n\006result\030\001"
    " \001(\0102\206\002\n\nFastnetmon\022N\n\nGetBanlist\022\036.fast"
    "mitigation.BanListRequest\032\034.fastmitigati"
    "on.BanListReply\"\0000\001\022R\n\nExecuteBan\022!.fast"
    "mitigation.ExecuteBanRequest\032\037.fastmitig"
    "ation.ExecuteBanReply\"\000\022T\n\014ExecuteUnBan\022"
    "!.fastmitigation.ExecuteBanRequest\032\037.fas"
    "tmitigation.ExecuteBanReply\"\000b\006proto3", 437);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "fastnetmon.proto", &protobuf_RegisterTypes);
  BanListRequest::default_instance_ = new BanListRequest();
  BanListReply::default_instance_ = new BanListReply();
  ExecuteBanRequest::default_instance_ = new ExecuteBanRequest();
  ExecuteBanReply::default_instance_ = new ExecuteBanReply();
  BanListRequest::default_instance_->InitAsDefaultInstance();
  BanListReply::default_instance_->InitAsDefaultInstance();
  ExecuteBanRequest::default_instance_->InitAsDefaultInstance();
  ExecuteBanReply::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_fastnetmon_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_fastnetmon_2eproto {
  StaticDescriptorInitializer_fastnetmon_2eproto() {
    protobuf_AddDesc_fastnetmon_2eproto();
  }
} static_descriptor_initializer_fastnetmon_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

BanListRequest::BanListRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:fastmitigation.BanListRequest)
}

void BanListRequest::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

BanListRequest::BanListRequest(const BanListRequest& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:fastmitigation.BanListRequest)
}

void BanListRequest::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

BanListRequest::~BanListRequest() {
  // @@protoc_insertion_point(destructor:fastmitigation.BanListRequest)
  SharedDtor();
}

void BanListRequest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void BanListRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BanListRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BanListRequest_descriptor_;
}

const BanListRequest& BanListRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_fastnetmon_2eproto();
  return *default_instance_;
}

BanListRequest* BanListRequest::default_instance_ = NULL;

BanListRequest* BanListRequest::New(::google::protobuf::Arena* arena) const {
  BanListRequest* n = new BanListRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void BanListRequest::Clear() {
}

bool BanListRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:fastmitigation.BanListRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0 ||
        ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
  }
success:
  // @@protoc_insertion_point(parse_success:fastmitigation.BanListRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:fastmitigation.BanListRequest)
  return false;
#undef DO_
}

void BanListRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:fastmitigation.BanListRequest)
  // @@protoc_insertion_point(serialize_end:fastmitigation.BanListRequest)
}

::google::protobuf::uint8* BanListRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:fastmitigation.BanListRequest)
  // @@protoc_insertion_point(serialize_to_array_end:fastmitigation.BanListRequest)
  return target;
}

int BanListRequest::ByteSize() const {
  int total_size = 0;

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BanListRequest::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const BanListRequest* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const BanListRequest>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BanListRequest::MergeFrom(const BanListRequest& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
}

void BanListRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BanListRequest::CopyFrom(const BanListRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BanListRequest::IsInitialized() const {

  return true;
}

void BanListRequest::Swap(BanListRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BanListRequest::InternalSwap(BanListRequest* other) {
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata BanListRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BanListRequest_descriptor_;
  metadata.reflection = BanListRequest_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// BanListRequest

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#ifndef _MSC_VER
const int BanListReply::kIpAddressFieldNumber;
#endif  // !_MSC_VER

BanListReply::BanListReply()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:fastmitigation.BanListReply)
}

void BanListReply::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

BanListReply::BanListReply(const BanListReply& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:fastmitigation.BanListReply)
}

void BanListReply::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  ip_address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

BanListReply::~BanListReply() {
  // @@protoc_insertion_point(destructor:fastmitigation.BanListReply)
  SharedDtor();
}

void BanListReply::SharedDtor() {
  ip_address_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void BanListReply::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BanListReply::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BanListReply_descriptor_;
}

const BanListReply& BanListReply::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_fastnetmon_2eproto();
  return *default_instance_;
}

BanListReply* BanListReply::default_instance_ = NULL;

BanListReply* BanListReply::New(::google::protobuf::Arena* arena) const {
  BanListReply* n = new BanListReply;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void BanListReply::Clear() {
  ip_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool BanListReply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:fastmitigation.BanListReply)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string ip_address = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ip_address()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->ip_address().data(), this->ip_address().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "fastmitigation.BanListReply.ip_address"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:fastmitigation.BanListReply)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:fastmitigation.BanListReply)
  return false;
#undef DO_
}

void BanListReply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:fastmitigation.BanListReply)
  // optional string ip_address = 1;
  if (this->ip_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->ip_address().data(), this->ip_address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "fastmitigation.BanListReply.ip_address");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->ip_address(), output);
  }

  // @@protoc_insertion_point(serialize_end:fastmitigation.BanListReply)
}

::google::protobuf::uint8* BanListReply::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:fastmitigation.BanListReply)
  // optional string ip_address = 1;
  if (this->ip_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->ip_address().data(), this->ip_address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "fastmitigation.BanListReply.ip_address");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->ip_address(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:fastmitigation.BanListReply)
  return target;
}

int BanListReply::ByteSize() const {
  int total_size = 0;

  // optional string ip_address = 1;
  if (this->ip_address().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->ip_address());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BanListReply::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const BanListReply* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const BanListReply>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void BanListReply::MergeFrom(const BanListReply& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.ip_address().size() > 0) {

    ip_address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.ip_address_);
  }
}

void BanListReply::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BanListReply::CopyFrom(const BanListReply& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BanListReply::IsInitialized() const {

  return true;
}

void BanListReply::Swap(BanListReply* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BanListReply::InternalSwap(BanListReply* other) {
  ip_address_.Swap(&other->ip_address_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata BanListReply::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BanListReply_descriptor_;
  metadata.reflection = BanListReply_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// BanListReply

// optional string ip_address = 1;
void BanListReply::clear_ip_address() {
  ip_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& BanListReply::ip_address() const {
  // @@protoc_insertion_point(field_get:fastmitigation.BanListReply.ip_address)
  return ip_address_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void BanListReply::set_ip_address(const ::std::string& value) {
  
  ip_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:fastmitigation.BanListReply.ip_address)
}
 void BanListReply::set_ip_address(const char* value) {
  
  ip_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:fastmitigation.BanListReply.ip_address)
}
 void BanListReply::set_ip_address(const char* value, size_t size) {
  
  ip_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:fastmitigation.BanListReply.ip_address)
}
 ::std::string* BanListReply::mutable_ip_address() {
  
  // @@protoc_insertion_point(field_mutable:fastmitigation.BanListReply.ip_address)
  return ip_address_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* BanListReply::release_ip_address() {
  
  return ip_address_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void BanListReply::set_allocated_ip_address(::std::string* ip_address) {
  if (ip_address != NULL) {
    
  } else {
    
  }
  ip_address_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ip_address);
  // @@protoc_insertion_point(field_set_allocated:fastmitigation.BanListReply.ip_address)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#ifndef _MSC_VER
const int ExecuteBanRequest::kIpAddressFieldNumber;
#endif  // !_MSC_VER

ExecuteBanRequest::ExecuteBanRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:fastmitigation.ExecuteBanRequest)
}

void ExecuteBanRequest::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ExecuteBanRequest::ExecuteBanRequest(const ExecuteBanRequest& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:fastmitigation.ExecuteBanRequest)
}

void ExecuteBanRequest::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  ip_address_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

ExecuteBanRequest::~ExecuteBanRequest() {
  // @@protoc_insertion_point(destructor:fastmitigation.ExecuteBanRequest)
  SharedDtor();
}

void ExecuteBanRequest::SharedDtor() {
  ip_address_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void ExecuteBanRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ExecuteBanRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ExecuteBanRequest_descriptor_;
}

const ExecuteBanRequest& ExecuteBanRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_fastnetmon_2eproto();
  return *default_instance_;
}

ExecuteBanRequest* ExecuteBanRequest::default_instance_ = NULL;

ExecuteBanRequest* ExecuteBanRequest::New(::google::protobuf::Arena* arena) const {
  ExecuteBanRequest* n = new ExecuteBanRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ExecuteBanRequest::Clear() {
  ip_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool ExecuteBanRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:fastmitigation.ExecuteBanRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string ip_address = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ip_address()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->ip_address().data(), this->ip_address().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "fastmitigation.ExecuteBanRequest.ip_address"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:fastmitigation.ExecuteBanRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:fastmitigation.ExecuteBanRequest)
  return false;
#undef DO_
}

void ExecuteBanRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:fastmitigation.ExecuteBanRequest)
  // optional string ip_address = 1;
  if (this->ip_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->ip_address().data(), this->ip_address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "fastmitigation.ExecuteBanRequest.ip_address");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->ip_address(), output);
  }

  // @@protoc_insertion_point(serialize_end:fastmitigation.ExecuteBanRequest)
}

::google::protobuf::uint8* ExecuteBanRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:fastmitigation.ExecuteBanRequest)
  // optional string ip_address = 1;
  if (this->ip_address().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->ip_address().data(), this->ip_address().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "fastmitigation.ExecuteBanRequest.ip_address");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->ip_address(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:fastmitigation.ExecuteBanRequest)
  return target;
}

int ExecuteBanRequest::ByteSize() const {
  int total_size = 0;

  // optional string ip_address = 1;
  if (this->ip_address().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->ip_address());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ExecuteBanRequest::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const ExecuteBanRequest* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ExecuteBanRequest>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ExecuteBanRequest::MergeFrom(const ExecuteBanRequest& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.ip_address().size() > 0) {

    ip_address_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.ip_address_);
  }
}

void ExecuteBanRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ExecuteBanRequest::CopyFrom(const ExecuteBanRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ExecuteBanRequest::IsInitialized() const {

  return true;
}

void ExecuteBanRequest::Swap(ExecuteBanRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ExecuteBanRequest::InternalSwap(ExecuteBanRequest* other) {
  ip_address_.Swap(&other->ip_address_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ExecuteBanRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ExecuteBanRequest_descriptor_;
  metadata.reflection = ExecuteBanRequest_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ExecuteBanRequest

// optional string ip_address = 1;
void ExecuteBanRequest::clear_ip_address() {
  ip_address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& ExecuteBanRequest::ip_address() const {
  // @@protoc_insertion_point(field_get:fastmitigation.ExecuteBanRequest.ip_address)
  return ip_address_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ExecuteBanRequest::set_ip_address(const ::std::string& value) {
  
  ip_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:fastmitigation.ExecuteBanRequest.ip_address)
}
 void ExecuteBanRequest::set_ip_address(const char* value) {
  
  ip_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:fastmitigation.ExecuteBanRequest.ip_address)
}
 void ExecuteBanRequest::set_ip_address(const char* value, size_t size) {
  
  ip_address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:fastmitigation.ExecuteBanRequest.ip_address)
}
 ::std::string* ExecuteBanRequest::mutable_ip_address() {
  
  // @@protoc_insertion_point(field_mutable:fastmitigation.ExecuteBanRequest.ip_address)
  return ip_address_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ExecuteBanRequest::release_ip_address() {
  
  return ip_address_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ExecuteBanRequest::set_allocated_ip_address(::std::string* ip_address) {
  if (ip_address != NULL) {
    
  } else {
    
  }
  ip_address_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ip_address);
  // @@protoc_insertion_point(field_set_allocated:fastmitigation.ExecuteBanRequest.ip_address)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#ifndef _MSC_VER
const int ExecuteBanReply::kResultFieldNumber;
#endif  // !_MSC_VER

ExecuteBanReply::ExecuteBanReply()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:fastmitigation.ExecuteBanReply)
}

void ExecuteBanReply::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ExecuteBanReply::ExecuteBanReply(const ExecuteBanReply& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:fastmitigation.ExecuteBanReply)
}

void ExecuteBanReply::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  result_ = false;
}

ExecuteBanReply::~ExecuteBanReply() {
  // @@protoc_insertion_point(destructor:fastmitigation.ExecuteBanReply)
  SharedDtor();
}

void ExecuteBanReply::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ExecuteBanReply::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ExecuteBanReply::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ExecuteBanReply_descriptor_;
}

const ExecuteBanReply& ExecuteBanReply::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_fastnetmon_2eproto();
  return *default_instance_;
}

ExecuteBanReply* ExecuteBanReply::default_instance_ = NULL;

ExecuteBanReply* ExecuteBanReply::New(::google::protobuf::Arena* arena) const {
  ExecuteBanReply* n = new ExecuteBanReply;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ExecuteBanReply::Clear() {
  result_ = false;
}

bool ExecuteBanReply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:fastmitigation.ExecuteBanReply)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool result = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &result_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:fastmitigation.ExecuteBanReply)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:fastmitigation.ExecuteBanReply)
  return false;
#undef DO_
}

void ExecuteBanReply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:fastmitigation.ExecuteBanReply)
  // optional bool result = 1;
  if (this->result() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->result(), output);
  }

  // @@protoc_insertion_point(serialize_end:fastmitigation.ExecuteBanReply)
}

::google::protobuf::uint8* ExecuteBanReply::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:fastmitigation.ExecuteBanReply)
  // optional bool result = 1;
  if (this->result() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->result(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:fastmitigation.ExecuteBanReply)
  return target;
}

int ExecuteBanReply::ByteSize() const {
  int total_size = 0;

  // optional bool result = 1;
  if (this->result() != 0) {
    total_size += 1 + 1;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ExecuteBanReply::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const ExecuteBanReply* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ExecuteBanReply>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ExecuteBanReply::MergeFrom(const ExecuteBanReply& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.result() != 0) {
    set_result(from.result());
  }
}

void ExecuteBanReply::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ExecuteBanReply::CopyFrom(const ExecuteBanReply& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ExecuteBanReply::IsInitialized() const {

  return true;
}

void ExecuteBanReply::Swap(ExecuteBanReply* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ExecuteBanReply::InternalSwap(ExecuteBanReply* other) {
  std::swap(result_, other->result_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ExecuteBanReply::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ExecuteBanReply_descriptor_;
  metadata.reflection = ExecuteBanReply_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ExecuteBanReply

// optional bool result = 1;
void ExecuteBanReply::clear_result() {
  result_ = false;
}
 bool ExecuteBanReply::result() const {
  // @@protoc_insertion_point(field_get:fastmitigation.ExecuteBanReply.result)
  return result_;
}
 void ExecuteBanReply::set_result(bool value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:fastmitigation.ExecuteBanReply.result)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace fastmitigation

// @@protoc_insertion_point(global_scope)
