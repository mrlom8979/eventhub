/*
 * Copyright (C) Yakiv Matiash
 */

#pragma once

#include "pch.h"
#include "eventhub/event.h"
#include "eventhub/event_type.h"
#include "eventhub/event_category.h"
#include "eventhub/key_code.h"

namespace eventhub {

class key_event : public event {
public:
  key_code get_key_code() const { return m_key_code; }

  EVENT_CLASS_CATEGORY(EVENT_KEYBOARD | EVENT_INPUT)
protected:
  key_event(const key_code keycode) : m_key_code(keycode) {}

  key_code m_key_code;
};

} // namespace eventhub
