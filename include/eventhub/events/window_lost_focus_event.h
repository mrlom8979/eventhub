/*
 * Copyright (C) Yakiv Matiash
 */

#pragma once

#include "pch.h"
#include "eventhub/event.h"
#include "eventhub/event_type.h"
#include "eventhub/event_category.h"

namespace eventhub {

class window_lost_focus_event : public event {
public:
  window_lost_focus_event() {}

  std::string to_string() const override {
    return "window_lost_focus_event";
  }

  EVENT_CLASS_TYPE(WINDOW_LOST_FOCUS)
  EVENT_CLASS_CATEGORY(EVENT_WINDOW)
};

} // namespace eventhub
