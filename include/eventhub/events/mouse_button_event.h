/*
 * Copyright (C) Yakiv Matiash
 */

#pragma once

#include "pch.h"
#include "eventhub/event.h"
#include "eventhub/event_type.h"
#include "eventhub/event_category.h"

namespace eventhub {

class mouse_button_event : public event {
public:
  int get_mouse_button() const { return m_button_code; }
  EVENT_CLASS_CATEGORY(EVENT_MOUSE | EVENT_INPUT | EVENT_MOUSEBUTTON)
protected:
  mouse_button_event(const int code)
  : m_button_code(code) {}

  int m_button_code;
};

} // namespace eventhub
