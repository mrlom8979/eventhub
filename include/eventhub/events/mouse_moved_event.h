/*
 * Copyright (C) Yakiv Matiash
 */

#pragma once

#include "pch.h"
#include "eventhub/event_type.h"
#include "eventhub/event_category.h"
#include "eventhub/events/mouse_button_event.h"

namespace eventhub {

class mouse_moved_event : public event {
public:
  mouse_moved_event(const float x, const float y)
  : m_mouse_x(x), m_mouse_y(y) {}

  float get_x() const { return m_mouse_x; }
  float get_y() const { return m_mouse_y; }

  std::string to_string() const override {
    char buffer[EVENT_BUFFER_SIZE];
    snprintf(buffer,
             EVENT_BUFFER_SIZE,
             "mouse_moved_event: %f, %f",
             m_mouse_x, m_mouse_y
             );
    return std::string(buffer);
  }

  EVENT_CLASS_TYPE(MOUSE_MOVE)
  EVENT_CLASS_CATEGORY(EVENT_MOUSE | EVENT_INPUT)
private:
  float m_mouse_x, m_mouse_y;
};

} // namespace eventhub
