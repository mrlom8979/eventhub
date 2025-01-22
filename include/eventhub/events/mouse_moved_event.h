/*
 * Copyright (C) Yakiv Matiash
 */

#pragma once

#include "pch.h"
#include "eventhub/mouse_button_event.h"
#include "eventhub/event_type.h"
#include "eventhub/event_category.h"
#include "eventhub/key_code.h"

namespace eventhub {

class mouse_moved_event : public event
{
public:
  mouse_moved_event(const float x, const float y)
  : m_mouse_x(x), m_mouse_y(y) {}

  float get_x() const { return m_mouse_x; }
  float get_y() const { return m_mouse_y; }

  std::string to_string() const override {
    char buffer[BUFFER_SIZE];
    snprintf(buffer,
             BUFFER_SIZE,
             "mouse_moved_event: %d, %d",
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
