/*
 * Copyright (C) Yakiv Matiash
 */

#pragma once

#include "pch.h"

using mods_code = uint16_t;

namespace mods {

enum : mods_code {
  MOD_NONE        = 0x0000,

  MOD_SHIFT       = 0x0001,
  MOD_CONTROL     = 0x0002,
  MOD_ALT         = 0x0004,
  MOD_SUPER       = 0x0008,
  MOD_CAPS_LOCK   = 0x0010,
  MOD_NUM_LOCK    = 0x0020
}; // enum : modifier_code

} // namespace modifier

