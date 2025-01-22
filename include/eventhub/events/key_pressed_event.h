/*
 * Copyright (C) Yakiv Matiash
 */

#pragma once

#include "pch.h"
#include "eventhub/base.h"
#include "eventhub/key_event.h"
#include "eventhub/event_type.h"
#include "eventhub/event_category.h"
#include "eventhub/key_code.h"

namespace eventhub {

class key_pressed_event : public key_event
{
public:
  key_pressed_event(const key_code code, bool isRepeat = false)
  : key_event(code), m_is_repeat(isRepeat) {}

  bool is_repeat() const { return m_is_repeat; }

  std::string to_string() const override {
    char buffer[BUFFER_SIZE];
    snprintf(buffer,
             BUFFER_SIZE,
             "key_pressed_event: %d (repeat = %s)",
             key_code,
             is_repeat ? "true" : "false"
             );
   return std::string(buffer);
  }

  EVENT_CLASS_TYPE(KEY_PRESSED)
private:
  bool m_is_repeat;
};

} // namespace eventhub
