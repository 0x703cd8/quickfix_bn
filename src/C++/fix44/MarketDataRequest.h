#ifndef FIX44_MARKETDATAREQUEST_H
#define FIX44_MARKETDATAREQUEST_H

#include "Message.h"

namespace FIX44
{

  class MarketDataRequest : public Message
  {
  public:
    MarketDataRequest() : Message(MsgType()) {}
    MarketDataRequest(const FIX::Message& m) : Message(m) {}
    MarketDataRequest(const Message& m) : Message(m) {}
    MarketDataRequest(const MarketDataRequest&) = default;
    MarketDataRequest(MarketDataRequest&&) = default;
    MarketDataRequest& operator=(const MarketDataRequest&) = default;
    MarketDataRequest& operator=(MarketDataRequest&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("V"); }

    MarketDataRequest(
      const FIX::MDReqID& aMDReqID,
      const FIX::SubscriptionRequestType& aSubscriptionRequestType )
    : Message(MsgType())
    {
      set(aMDReqID);
      set(aSubscriptionRequestType);
    }

    FIELD_SET(*this, FIX::MDReqID);
    FIELD_SET(*this, FIX::SubscriptionRequestType);
    FIELD_SET(*this, FIX::MarketDepth);
    FIELD_SET(*this, FIX::AggregatedBook);
    FIELD_SET(*this, FIX::NoRelatedSym);
    class NoRelatedSym: public FIX::Group
    {
    public:
    NoRelatedSym() : FIX::Group(146,55,FIX::message_order(55,0)) {}
      FIELD_SET(*this, FIX::Symbol);
    };
    FIELD_SET(*this, FIX::NoMDEntryTypes);
    class NoMDEntryTypes: public FIX::Group
    {
    public:
    NoMDEntryTypes() : FIX::Group(267,269,FIX::message_order(269,0)) {}
      FIELD_SET(*this, FIX::MDEntryType);
    };
  };

}

#endif
