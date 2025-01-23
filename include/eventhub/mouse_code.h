/*
 * Copyright (C) Yakiv Matiash
 */

#pragma once

#include "pch.h"

namespace eventhub {

using mouse_code = uint16_t;

namespace mouse {

enum : mouse_code {
  MOUSE_BUTTON_0        = 0,
  MOUSE_BUTTON_1        = 1,
  MOUSE_BUTTON_2        = 2,
  MOUSE_BUTTON_3        = 3,
  MOUSE_BUTTON_4        = 4,
  MOUSE_BUTTON_5        = 5,
  MOUSE_BUTTON_6        = 6,
  MOUSE_BUTTON_7        = 7,

  MOUSE_BUTTON_LAST     = MOUSE_BUTTON_7,
  MOUSE_BUTTON_LEFT     = MOUSE_BUTTON_0,
  MOUSE_BUTTON_RIGHT    = MOUSE_BUTTON_1,
  MOUSE_BUTTON_MIDDLE   = MOUSE_BUTTON_2
}; // enum : mouse_code

} // namespace mouse

} // namespace eventhub
