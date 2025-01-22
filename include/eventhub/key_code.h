/*
 * Copyright (C) Yakiv Matiash
 */

#pragma once

#include "pch.h"

namespace eventhub {

using key_code = uint16_t;

namespace key {

enum : key_code {
  KEY_UNKNOWN       = 0,

  KEY_SPACE         = 32,
  KEY_ARROW_LEFT    = 37,
  KEY_ARROW_UP      = 38,
  KEY_ARROW_RIGHT   = 39,
  KEY_ARROW_DOWN    = 40,
  KEY_APOSTROPHE    = 39, /* ' */
  KEY_COMMA         = 44, /* , */
  KEY_MINUS         = 45, /* - */
  KEY_PERIOD        = 46, /* . */
  KEY_SLASH         = 47, /* / */

}; // enum : key_code

const key_code key_codes[] = {
  KEY_UNKNOWN,

  KEY_SPACE,
  KEY_ARROW_LEFT,
  KEY_ARROW_UP,
  KEY_ARROW_RIGHT,
  KEY_ARROW_DOWN,
  KEY_APOSTROPHE,
  KEY_COMMA,
  KEY_MINUS,
  KEY_PERIOD,
  KEY_SLASH
}; // const key_code key_codes[]

} // namespace key

key_code get_key_code(const char* name);

} // namespace eventhub
