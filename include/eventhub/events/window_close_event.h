/*
 * Copyright (C) Yakiv Matiash
 */

#pragma once

#include "pch.h"
#include "eventhub/event.h"
#include "eventhub/event_type.h"
#include "eventhub/event_category.h"

namespace eventhub {

class window_close_event : public event {
public:
  window_close_event() = default;

  std::string to_string() const override {
    return "window_close_event";
  }

  EVENT_CLASS_TYPE(WINDOW_CLOSE)
  EVENT_CLASS_CATEGORY(EVENT_WINDOW)
};

} // namespace eventhub
