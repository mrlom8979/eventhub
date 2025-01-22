/*
 * Copyright (C) Yakiv Matiash
 */

#pragma once

#include "pch.h"
#include "eventhub/mouse_button_event.h"
#include "eventhub/event_type.h"
#include "eventhub/event_category.h"
#include "eventhub/mouse_code.h"

namespace eventhub {

class mouse_button_released_event : public mouse_button_event
{
public:
  mouse_button_released_event(const mouse_code code)
  : mouse_button_event(code) {}

  std::string to_string() const override {
    char buffer[BUFFER_SIZE];
    snprintf(buffer,
             BUFFER_SIZE,
             "mouse_button_released_event: %d",
             m_button_code
             );
    return std::string(buffer);
  }

  EVENT_CLASS_TYPE(MOUSE_BUTTON_RELEASED)
};

} // namespace eventhub
