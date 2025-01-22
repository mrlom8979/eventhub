/*
 * Copyright (C) Yakiv Matiash
 */

#pragma once

#include "pch.h"
#include "eventhub/mouse_button_event.h"
#include "eventhub/event_type.h"
#include "eventhub/event_category.h"

namespace eventhub {

class mouse_scrolled_event : public event
{
public:
  mouse_scrolled_event(const float x_offset, const float y_offset)
  : m_x_offset(x_offset), m_y_offset(y_offset) {}

  float get_x_offset() const { return m_x_offset; }
  float get_y_offset() const { return m_y_offset; }

  std::string to_string() const override {
    char buffer[BUFFER_SIZE];
    snprintf(buffer,
             BUFFER_SIZE,
             "mouse_scrolled_event: %d, %d",
             get_x_offset(),
             get_y_offset()
             );
    return std::string(buffer);
  }

  EVENT_CLASS_TYPE(MOUSE_SCROLLED)
  EVENT_CLASS_CATEGORY(EVENT_MOUSE | EVENT_INPUT)
private:
  float m_x_offset, m_y_offset;
};

} // namespace eventhub
