#ifndef FIX44_INSTRUMENTLIST_H
#define FIX44_INSTRUMENTLIST_H

#include "Message.h"

namespace FIX44
{

  class InstrumentList : public Message
  {
  public:
    InstrumentList() : Message(MsgType()) {}
    InstrumentList(const FIX::Message& m) : Message(m) {}
    InstrumentList(const Message& m) : Message(m) {}
    InstrumentList(const InstrumentList&) = default;
    InstrumentList(InstrumentList&&) = default;
    InstrumentList& operator=(const InstrumentList&) = default;
    InstrumentList& operator=(InstrumentList&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("y"); }

    InstrumentList(
      const FIX::InstrumentReqID& aInstrumentReqID )
    : Message(MsgType())
    {
      set(aInstrumentReqID);
    }

    FIELD_SET(*this, FIX::InstrumentReqID);
    FIELD_SET(*this, FIX::NoRelatedSym);
    class NoRelatedSym: public FIX::Group
    {
    public:
    NoRelatedSym() : FIX::Group(146,55,FIX::message_order(55,15,562,1140,25039,25040,25041,25042,969,0)) {}
      FIELD_SET(*this, FIX::Symbol);
      FIELD_SET(*this, FIX::Currency);
      FIELD_SET(*this, FIX::MinTradeVol);
      FIELD_SET(*this, FIX::MaxTradeVol);
      FIELD_SET(*this, FIX::MinQtyIncrement);
      FIELD_SET(*this, FIX::MarketMinTradeVol);
      FIELD_SET(*this, FIX::MarketMaxTradeVol);
      FIELD_SET(*this, FIX::MarketMinQtyIncrement);
      FIELD_SET(*this, FIX::MinPriceIncrement);
    };
  };

}

#endif
