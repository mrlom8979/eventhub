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

class mouse_button_event : public event
{
public:
  mouse_code get_mouse_button() const { return m_button_code; }
  EVENT_CLASS_CATEGORY(EVENT_MOUSE | EVENT_INPUT | EVENT_MOUSEBUTTON)
protected:
  mouse_button_event(const mouse_code code)
  : m_button_code(code) {}

  mouse_code m_button_code;
};

} // namespace eventhub
