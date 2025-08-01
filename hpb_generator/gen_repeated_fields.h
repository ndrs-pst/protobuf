// Protocol Buffers - Google's data interchange format
// Copyright 2023 Google LLC.  All rights reserved.
//
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file or at
// https://developers.google.com/open-source/licenses/bsd

#ifndef GOOGLE_PROTOBUF_COMPILER_HPB_GEN_REPEATED_FIELDS_H__
#define GOOGLE_PROTOBUF_COMPILER_HPB_GEN_REPEATED_FIELDS_H__

#include "absl/strings/string_view.h"
#include "hpb_generator/context.h"
#include "google/protobuf/descriptor.h"

namespace google::protobuf::hpb_generator {

namespace protobuf = ::proto2;

void WriteRepeatedFieldUsingAccessors(const protobuf::FieldDescriptor* field,
                                      absl::string_view class_name,
                                      absl::string_view resolved_field_name,
                                      Context& ctx, bool read_only);

void WriteRepeatedFieldsInMessageHeader(const protobuf::Descriptor* desc,
                                        const protobuf::FieldDescriptor* field,
                                        absl::string_view resolved_field_name,
                                        absl::string_view resolved_upbc_name,
                                        Context& ctx);

void WriteRepeatedMessageAccessor(const protobuf::Descriptor* message,
                                  const protobuf::FieldDescriptor* field,
                                  absl::string_view resolved_field_name,
                                  absl::string_view class_name, Context& ctx);

void WriteRepeatedStringAccessor(const protobuf::Descriptor* message,
                                 const protobuf::FieldDescriptor* field,
                                 absl::string_view resolved_field_name,
                                 absl::string_view class_name, Context& ctx);

void WriteRepeatedScalarAccessor(const protobuf::Descriptor* message,
                                 const protobuf::FieldDescriptor* field,
                                 absl::string_view resolved_field_name,
                                 absl::string_view class_name, Context& ctx);

}  // namespace protobuf
}  // namespace google::hpb_generator

#endif  // GOOGLE_PROTOBUF_COMPILER_HPB_GEN_REPEATED_FIELDS_H__
