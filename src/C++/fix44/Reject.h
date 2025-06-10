#ifndef FIX44_REJECT_H
#define FIX44_REJECT_H

#include "Message.h"

namespace FIX44
{

  class Reject : public Message
  {
  public:
    Reject() : Message(MsgType()) {}
    Reject(const FIX::Message& m) : Message(m) {}
    Reject(const Message& m) : Message(m) {}
    Reject(const Reject&) = default;
    Reject(Reject&&) = default;
    Reject& operator=(const Reject&) = default;
    Reject& operator=(Reject&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("3"); }

    FIELD_SET(*this, FIX::RefSeqNum);
    FIELD_SET(*this, FIX::RefTagID);
    FIELD_SET(*this, FIX::RefMsgType);
    FIELD_SET(*this, FIX::SessionRejectReason);
    FIELD_SET(*this, FIX::ErrorCode);
    FIELD_SET(*this, FIX::Text);
  };

}

#endif
