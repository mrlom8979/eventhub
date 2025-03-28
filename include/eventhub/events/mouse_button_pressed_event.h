/*
 * Copyright (C) Yakiv Matiash
 */

#pragma once

#include "pch.h"
#include "eventhub/event_type.h"
#include "eventhub/event_category.h"
#include "eventhub/mouse.h"
#include "eventhub/events/mouse_button_event.h"

namespace eventhub {

class mouse_button_pressed_event : public mouse_button_event {
public:
  mouse_button_pressed_event(const int code)
  : mouse_button_event(code) {}

  std::string to_string() const override {
    char buffer[EVENT_BUFFER_SIZE];
    snprintf(buffer,
             EVENT_BUFFER_SIZE,
             "mouse_button_pressed_event: %d",
             m_button_code
             );
    return std::string(buffer);
  }

  EVENT_CLASS_TYPE(MOUSE_BUTTON_PRESSED)
};

} // namespace eventhub
