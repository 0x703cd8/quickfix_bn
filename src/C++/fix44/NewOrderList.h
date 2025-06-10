#ifndef FIX44_NEWORDERLIST_H
#define FIX44_NEWORDERLIST_H

#include "Message.h"

namespace FIX44
{

  class NewOrderList : public Message
  {
  public:
    NewOrderList() : Message(MsgType()) {}
    NewOrderList(const FIX::Message& m) : Message(m) {}
    NewOrderList(const Message& m) : Message(m) {}
    NewOrderList(const NewOrderList&) = default;
    NewOrderList(NewOrderList&&) = default;
    NewOrderList& operator=(const NewOrderList&) = default;
    NewOrderList& operator=(NewOrderList&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("E"); }

    NewOrderList(
      const FIX::ClListID& aClListID,
      const FIX::ContingencyType& aContingencyType )
    : Message(MsgType())
    {
      set(aClListID);
      set(aContingencyType);
    }

    FIELD_SET(*this, FIX::ClListID);
    FIELD_SET(*this, FIX::ContingencyType);
    FIELD_SET(*this, FIX::NoOrders);
    class NoOrders: public FIX::Group
    {
    public:
    NoOrders() : FIX::Group(73,11,FIX::message_order(11,38,40,18,44,54,55,59,111,152,847,7940,25001,25010,0)) {}
      FIELD_SET(*this, FIX::ClOrdID);
      FIELD_SET(*this, FIX::OrderQty);
      FIELD_SET(*this, FIX::OrdType);
      FIELD_SET(*this, FIX::ExecInst);
      FIELD_SET(*this, FIX::Price);
      FIELD_SET(*this, FIX::TriggerType);
      FIELD_SET(*this, FIX::TriggerAction);
      FIELD_SET(*this, FIX::TriggerPrice);
      FIELD_SET(*this, FIX::TriggerPriceType);
      FIELD_SET(*this, FIX::TriggerPriceDirection);
      FIELD_SET(*this, FIX::TriggerTrailingDeltaBips);
      FIELD_SET(*this, FIX::Side);
      FIELD_SET(*this, FIX::Symbol);
      FIELD_SET(*this, FIX::TimeInForce);
      FIELD_SET(*this, FIX::MaxFloor);
      FIELD_SET(*this, FIX::CashOrderQty);
      FIELD_SET(*this, FIX::TargetStrategy);
      FIELD_SET(*this, FIX::StrategyID);
      FIELD_SET(*this, FIX::SelfTradePreventionMode);
      FIELD_SET(*this, FIX::NoListTriggeringInstructions);
      class NoListTriggeringInstructions: public FIX::Group
      {
      public:
      NoListTriggeringInstructions() : FIX::Group(25010,25011,FIX::message_order(25011,25012,25013,0)) {}
        FIELD_SET(*this, FIX::ListTriggerType);
        FIELD_SET(*this, FIX::ListTriggerTriggerIndex);
        FIELD_SET(*this, FIX::ListTriggerAction);
      };
    };
  };

}

#endif
