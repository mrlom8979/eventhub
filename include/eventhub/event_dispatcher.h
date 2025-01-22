/*
 * Copyright (C) Yakiv Matiash
 */

#pragma once

#include "pch.h"
#include "eventhub/event.h"

namespace eventhub {

class event_dispatcher {
public:
  event_dispatcher(event& evt) : m_event(evt) {}

  template<typename T, typename F>
  bool dispatch(const F& func) {
    if (m_event.get_event_type() == T::get_static_type()) {
      m_event.handled |= func(static_cast<T&>(m_event));
      return true;
    }
    return false;
  }
private:
  event& m_event;

public:
  friend std::ostream& operator<<(std::ostream& os, const event& e) {
    return os << e.to_string();
  }
};

} // namespace eventhub
