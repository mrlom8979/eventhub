/*
 * Copyright (C) Yakiv Matiash
 */

#pragma once

#include "pch.h"
#include "eventhub/event.h"
#include "eventhub/event_type.h"
#include "eventhub/event_category.h"

namespace eventhub {

class window_moved_event : public event {
public:
  window_moved_event(int x, int y)
  : m_x(x), m_y(y) {}

  int get_x() const { return m_x; }
  int get_y() const { return m_y; }

  std::string to_string() const override {
    char buffer[EVENT_BUFFER_SIZE];
    snprintf(buffer,
             EVENT_BUFFER_SIZE,
             "window_moved_event: %d, %d",
             m_x,
             m_y
             );
    return std::string(buffer);
  }

  EVENT_CLASS_TYPE(WINDOW_MOVED)
  EVENT_CLASS_CATEGORY(EVENT_WINDOW)
private:
  int m_x, m_y;
};

} // namespace eventhub
