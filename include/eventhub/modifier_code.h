/*
 * Copyright (C) Yakiv Matiash
 */

#pragma once

#include "pch.h"

namespace eventhub {

using modifier_code = uint16_t;

namespace modifier {

enum : modifier_code {
  KEY_MOD_NONE        = 0x0000,

  KEY_MOD_SHIFT       = 0x0001,
  KEY_MOD_CONTROL     = 0x0002,
  KEY_MOD_ALT         = 0x0004,
  KEY_MOD_SUPER       = 0x0008,
  KEY_MOD_CAPS_LOCK   = 0x0010,
  KEY_MOD_NUM_LOCK    = 0x0020,
}; // enum : modifier_code

} // namespace modifier

} // namespace eventhub
