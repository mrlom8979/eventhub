/*
 * Copyright (C) Yakiv Matiash
 */

#pragma once

#include "pch.h"

namespace eventhub {

enum event_category
{
  NONE = 0,
  EVENT_WINDOW      = EVENT_BIT(0),
  EVENT_APP         = EVENT_BIT(1),
  EVENT_INPUT       = EVENT_BIT(2),
  EVENT_KEYBOARD    = EVENT_BIT(3),
  EVENT_MOUSE       = EVENT_BIT(4),
  EVENT_MOUSEBUTTON = EVENT_BIT(5),
  EVENT_TOUCH       = EVENT_BIT(6),
  EVENT_JOYSTICK    = EVENT_BIT(7),
};

#define EVENT_CLASS_CATEGORY(category)\
  virtual int get_category_flags() const override { return category; }

} // namespace eventhub
