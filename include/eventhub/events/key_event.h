/*
 * Copyright (C) Yakiv Matiash
 */

#pragma once

#include "pch.h"
#include "eventhub/event.h"
#include "eventhub/event_type.h"
#include "eventhub/event_category.h"
// #include "eventhub/key.h"

namespace eventhub {

class key_event : public event {
public:
  int get_key_code() const { return m_key_code; }

  EVENT_CLASS_CATEGORY(EVENT_KEYBOARD | EVENT_INPUT)
protected:
  key_event(const int keycode) : m_key_code(keycode) {}

  int m_key_code;
};

} // namespace eventhub
