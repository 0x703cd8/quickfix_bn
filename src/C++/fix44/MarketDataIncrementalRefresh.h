#ifndef FIX44_MARKETDATAINCREMENTALREFRESH_H
#define FIX44_MARKETDATAINCREMENTALREFRESH_H

#include "Message.h"

namespace FIX44
{

  class MarketDataIncrementalRefresh : public Message
  {
  public:
    MarketDataIncrementalRefresh() : Message(MsgType()) {}
    MarketDataIncrementalRefresh(const FIX::Message& m) : Message(m) {}
    MarketDataIncrementalRefresh(const Message& m) : Message(m) {}
    MarketDataIncrementalRefresh(const MarketDataIncrementalRefresh&) = default;
    MarketDataIncrementalRefresh(MarketDataIncrementalRefresh&&) = default;
    MarketDataIncrementalRefresh& operator=(const MarketDataIncrementalRefresh&) = default;
    MarketDataIncrementalRefresh& operator=(MarketDataIncrementalRefresh&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("X"); }

    MarketDataIncrementalRefresh(
      const FIX::MDReqID& aMDReqID )
    : Message(MsgType())
    {
      set(aMDReqID);
    }

    FIELD_SET(*this, FIX::MDReqID);
    FIELD_SET(*this, FIX::LastFragment);
    FIELD_SET(*this, FIX::NoMDEntries);
    class NoMDEntries: public FIX::Group
    {
    public:
    NoMDEntries() : FIX::Group(268,279,FIX::message_order(279,270,271,269,55,60,1003,2446,25043,25044,0)) {}
      FIELD_SET(*this, FIX::MDUpdateAction);
      FIELD_SET(*this, FIX::MDEntryPx);
      FIELD_SET(*this, FIX::MDEntrySize);
      FIELD_SET(*this, FIX::MDEntryType);
      FIELD_SET(*this, FIX::Symbol);
      FIELD_SET(*this, FIX::TransactTime);
      FIELD_SET(*this, FIX::TradeID);
      FIELD_SET(*this, FIX::AggressorSide);
      FIELD_SET(*this, FIX::FirstBookUpdateID);
      FIELD_SET(*this, FIX::LastBookUpdateID);
    };
  };

}

#endif
