/*
 * Copyright (C) Yakiv Matiash
 */

#pragma once

#include "pch.h"

namespace eventhub {

enum class event_type
{
  NONE = 0,
  WINDOW_CLOSE, WINDOW_RESIZE, WINDOW_FOCUS, WINDOW_LOST_FOCUS, WINDOW_MOVED,
  APP_TICK, APP_UPDATE, APP_RENDER,
  KEY_PRESSED, KEY_RELEASED, KEY_TYPED,
  MOUSE_BUTTON_PRESSED, MOUSE_BUTTON_RELEASED, MOUSE_MOVE, MOUSE_SCROLLED,
  TOUCH_DOWN, TOUCH_MOVE, TOUCH_UP, TOUCH_CANCEL,
  JOYSTICK_BUTTON_PRESSED, JOYSTICK_BUTTON_RELEASED, JOYSTICK_AXIS_MOVED,
};

#define EVENT_CLASS_TYPE(type)                                                        \
  do {                                                                                \
    static event_type get_static_type() { return event_type::type; }                  \
    virtual event_type get_event_type() const override { return get_static_type(); }  \
    virtual const char* get_name() const override { return #type; }                   \
  } while (0)

}

} // namespace eventhub
