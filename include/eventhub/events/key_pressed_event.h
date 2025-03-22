/*
 * Copyright (C) Yakiv Matiash
 */

#pragma once

#include "pch.h"
#include "eventhub/base.h"
#include "eventhub/event_type.h"
#include "eventhub/event_category.h"
// #include "eventhub/key.h"
#include "eventhub/events/key_event.h"

namespace eventhub {

class key_pressed_event : public key_event {
public:
  key_pressed_event(const int code, bool is_repeat = false)
  : key_event(code), m_is_repeat(is_repeat) {}

  bool is_repeat() const { return m_is_repeat; }

  std::string to_string() const override {
    char buffer[EVENT_BUFFER_SIZE];
    snprintf(buffer,
             EVENT_BUFFER_SIZE,
             "key_pressed_event: %d (repeat = %s)",
             m_key_code,
             m_is_repeat ? "true" : "false");
   return std::string(buffer);
  }

  EVENT_CLASS_TYPE(KEY_PRESSED)
private:
  bool m_is_repeat;
};

} // namespace eventhub
