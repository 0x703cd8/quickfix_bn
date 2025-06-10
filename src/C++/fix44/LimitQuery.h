#ifndef FIX44_LIMITQUERY_H
#define FIX44_LIMITQUERY_H

#include "Message.h"

namespace FIX44
{

  class LimitQuery : public Message
  {
  public:
    LimitQuery() : Message(MsgType()) {}
    LimitQuery(const FIX::Message& m) : Message(m) {}
    LimitQuery(const Message& m) : Message(m) {}
    LimitQuery(const LimitQuery&) = default;
    LimitQuery(LimitQuery&&) = default;
    LimitQuery& operator=(const LimitQuery&) = default;
    LimitQuery& operator=(LimitQuery&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("XLQ"); }

    LimitQuery(
      const FIX::ReqID& aReqID )
    : Message(MsgType())
    {
      set(aReqID);
    }

    FIELD_SET(*this, FIX::ReqID);
  };

}

#endif
