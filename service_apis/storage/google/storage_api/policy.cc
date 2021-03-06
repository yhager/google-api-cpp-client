// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.1

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Cloud Storage JSON API (storage/v1)
// Description:
//   Stores and retrieves potentially large, immutable data objects.
// Classes:
//   Policy
// Documentation:
//   https://developers.google.com/storage/docs/json_api/

#include "google/storage_api/policy.h"
#include <string>
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_storage_api {
using namespace googleapis;



// Object factory method (static).
Policy::PolicyBindings* Policy::PolicyBindings::New() {
  return new client::JsonCppCapsule<PolicyBindings>;
}

// Standard immutable constructor.
Policy::PolicyBindings::PolicyBindings(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
Policy::PolicyBindings::PolicyBindings(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
Policy::PolicyBindings::~PolicyBindings() {
}

// Properties.
// Object factory method (static).
Policy* Policy::New() {
  return new client::JsonCppCapsule<Policy>;
}

// Standard immutable constructor.
Policy::Policy(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
Policy::Policy(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
Policy::~Policy() {
}

// Properties.
}  // namespace google_storage_api
