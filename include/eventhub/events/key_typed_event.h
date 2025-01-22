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

class key_typed_event : public key_event
{
public:
  key_typed_event(const key_code code)
  : key_event(code) {}

  std::string to_string() const override {
    char buffer[BUFFER_SIZE];
    snprintf(buffer,
             BUFFER_SIZE,
             "key_typed_event: %d",
             m_key_code
             );
    return std::string(buffer);
  }

  EVENT_CLASS_TYPE(KEY_TYPED)
};

} // namespace eventhub
