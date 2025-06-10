#ifndef FIX44_LIMITRESPONSE_H
#define FIX44_LIMITRESPONSE_H

#include "Message.h"

namespace FIX44
{

  class LimitResponse : public Message
  {
  public:
    LimitResponse() : Message(MsgType()) {}
    LimitResponse(const FIX::Message& m) : Message(m) {}
    LimitResponse(const Message& m) : Message(m) {}
    LimitResponse(const LimitResponse&) = default;
    LimitResponse(LimitResponse&&) = default;
    LimitResponse& operator=(const LimitResponse&) = default;
    LimitResponse& operator=(LimitResponse&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("XLR"); }

    LimitResponse(
      const FIX::ReqID& aReqID )
    : Message(MsgType())
    {
      set(aReqID);
    }

    FIELD_SET(*this, FIX::ReqID);
    FIELD_SET(*this, FIX::NoLimitIndicators);
    class NoLimitIndicators: public FIX::Group
    {
    public:
    NoLimitIndicators() : FIX::Group(25003,25004,FIX::message_order(25004,25005,25006,25007,25008,0)) {}
      FIELD_SET(*this, FIX::LimitType);
      FIELD_SET(*this, FIX::LimitCount);
      FIELD_SET(*this, FIX::LimitMax);
      FIELD_SET(*this, FIX::LimitResetInterval);
      FIELD_SET(*this, FIX::LimitResetIntervalResolution);
    };
  };

}

#endif
