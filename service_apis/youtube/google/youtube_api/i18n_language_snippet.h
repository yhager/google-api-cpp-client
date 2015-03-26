// Copyright 2010 Google Inc.
//
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

// This code was generated by google-apis-code-generator 1.5.0
//   Build date: 2015-01-14 17:53:03 UTC
//   on: 2015-03-12, 20:35:33 UTC
//   C++ generator version:

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Generated from:
//   Version: v3
//   Revision: 130
// Generated by:
//    Tool: google-apis-code-generator 1.5.0
//     C++: 0.1.2
#ifndef  GOOGLE_YOUTUBE_API_I18N_LANGUAGE_SNIPPET_H_
#define  GOOGLE_YOUTUBE_API_I18N_LANGUAGE_SNIPPET_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * Basic details about an i18n language, such as language code and human-
 * readable name.
 *
 * @ingroup DataObject
 */
class I18nLanguageSnippet : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static I18nLanguageSnippet* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit I18nLanguageSnippet(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit I18nLanguageSnippet(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~I18nLanguageSnippet();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::I18nLanguageSnippet</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::I18nLanguageSnippet");
  }

  /**
   * Determine if the '<code>hl</code>' attribute was set.
   *
   * @return true if the '<code>hl</code>' attribute was set.
   */
  bool has_hl() const {
    return Storage().isMember("hl");
  }

  /**
   * Clears the '<code>hl</code>' attribute.
   */
  void clear_hl() {
    MutableStorage()->removeMember("hl");
  }


  /**
   * Get the value of the '<code>hl</code>' attribute.
   */
  const StringPiece get_hl() const {
    const Json::Value& v = Storage("hl");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>hl</code>' attribute.
   *
   * A short BCP-47 code that uniquely identifies a language.
   *
   * @param[in] value The new value.
   */
  void set_hl(const StringPiece& value) {
    *MutableStorage("hl") = value.data();
  }

  /**
   * Determine if the '<code>name</code>' attribute was set.
   *
   * @return true if the '<code>name</code>' attribute was set.
   */
  bool has_name() const {
    return Storage().isMember("name");
  }

  /**
   * Clears the '<code>name</code>' attribute.
   */
  void clear_name() {
    MutableStorage()->removeMember("name");
  }


  /**
   * Get the value of the '<code>name</code>' attribute.
   */
  const StringPiece get_name() const {
    const Json::Value& v = Storage("name");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>name</code>' attribute.
   *
   * The human-readable name of the language in the language itself.
   *
   * @param[in] value The new value.
   */
  void set_name(const StringPiece& value) {
    *MutableStorage("name") = value.data();
  }

 private:
  void operator=(const I18nLanguageSnippet&);
};  // I18nLanguageSnippet
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_I18N_LANGUAGE_SNIPPET_H_