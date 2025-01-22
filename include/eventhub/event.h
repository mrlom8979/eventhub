/*
 * Copyright (C) Yakiv Matiash
 */

#pragma once

#include "pch.h"
#include "eventhub/event_type.h"
#include "eventhub/event_category.h"

namespace eventhub {

class event
{
public:
  virtual ~event() = default;

  bool handled = false;

  virtual event_type get_event_type() const = 0;
  virtual const char* get_name() const = 0;
  virtual int get_category_flags() const = 0;
  virtual std::string to_string() const { return get_name(); }

  bool is_in_category(event_category category) {
    return get_category_flags() & category;
  }
};

} // namespace eventhub
