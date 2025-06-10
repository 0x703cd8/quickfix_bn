#ifndef FIX44_INSTRUMENTLISTREQUEST_H
#define FIX44_INSTRUMENTLISTREQUEST_H

#include "Message.h"

namespace FIX44
{

  class InstrumentListRequest : public Message
  {
  public:
    InstrumentListRequest() : Message(MsgType()) {}
    InstrumentListRequest(const FIX::Message& m) : Message(m) {}
    InstrumentListRequest(const Message& m) : Message(m) {}
    InstrumentListRequest(const InstrumentListRequest&) = default;
    InstrumentListRequest(InstrumentListRequest&&) = default;
    InstrumentListRequest& operator=(const InstrumentListRequest&) = default;
    InstrumentListRequest& operator=(InstrumentListRequest&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("x"); }

    InstrumentListRequest(
      const FIX::InstrumentReqID& aInstrumentReqID,
      const FIX::InstrumentListRequestType& aInstrumentListRequestType )
    : Message(MsgType())
    {
      set(aInstrumentReqID);
      set(aInstrumentListRequestType);
    }

    FIELD_SET(*this, FIX::InstrumentReqID);
    FIELD_SET(*this, FIX::InstrumentListRequestType);
    FIELD_SET(*this, FIX::Symbol);
  };

}

#endif
