#ifndef FIX44_LOGON_H
#define FIX44_LOGON_H

#include "Message.h"

namespace FIX44
{

  class Logon : public Message
  {
  public:
    Logon() : Message(MsgType()) {}
    Logon(const FIX::Message& m) : Message(m) {}
    Logon(const Message& m) : Message(m) {}
    Logon(const Logon&) = default;
    Logon(Logon&&) = default;
    Logon& operator=(const Logon&) = default;
    Logon& operator=(Logon&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("A"); }

    Logon(
      const FIX::HeartBtInt& aHeartBtInt )
    : Message(MsgType())
    {
      set(aHeartBtInt);
    }

    FIELD_SET(*this, FIX::EncryptMethod);
    FIELD_SET(*this, FIX::HeartBtInt);
    FIELD_SET(*this, FIX::RawDataLength);
    FIELD_SET(*this, FIX::RawData);
    FIELD_SET(*this, FIX::ResetSeqNumFlag);
    FIELD_SET(*this, FIX::Username);
    FIELD_SET(*this, FIX::MessageHandling);
    FIELD_SET(*this, FIX::UUID);
  };

}

#endif
