/*
 * Copyright (C) Yakiv Matiash
 */

#pragma once

#include "pch.h"
#include "eventhub/event.h"
#include "eventhub/event_type.h"
#include "eventhub/event_category.h"

namespace eventhub {

class window_resize_event : public event
{
public:
  window_resize_event(unsigned int width, unsigned int height)
  : m_width(width), m_height(height) {}

  unsigned int get_width() const { return m_width; }
  unsigned int get_height() const { return m_height; }

  std::string to_string() const override {
    char buffer[BUFFER_SIZE];
    snprintf(buffer,
             BUFFER_SIZE,
             "window_resize_event: %d, %d",
             m_width,
             m_height
             );
    return std::string(buffer);
  }

  EVENT_CLASS_TYPE(WINDOW_RESIZE)
  EVENT_CLASS_CATEGORY(EVENT_WINDOW)
private:
  unsigned int m_width, m_height;
};

} // namespace eventhub
