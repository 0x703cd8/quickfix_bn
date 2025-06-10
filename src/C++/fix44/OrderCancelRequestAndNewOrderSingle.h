#ifndef FIX44_ORDERCANCELREQUESTANDNEWORDERSINGLE_H
#define FIX44_ORDERCANCELREQUESTANDNEWORDERSINGLE_H

#include "Message.h"

namespace FIX44
{

  class OrderCancelRequestAndNewOrderSingle : public Message
  {
  public:
    OrderCancelRequestAndNewOrderSingle() : Message(MsgType()) {}
    OrderCancelRequestAndNewOrderSingle(const FIX::Message& m) : Message(m) {}
    OrderCancelRequestAndNewOrderSingle(const Message& m) : Message(m) {}
    OrderCancelRequestAndNewOrderSingle(const OrderCancelRequestAndNewOrderSingle&) = default;
    OrderCancelRequestAndNewOrderSingle(OrderCancelRequestAndNewOrderSingle&&) = default;
    OrderCancelRequestAndNewOrderSingle& operator=(const OrderCancelRequestAndNewOrderSingle&) = default;
    OrderCancelRequestAndNewOrderSingle& operator=(OrderCancelRequestAndNewOrderSingle&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("XCN"); }

    OrderCancelRequestAndNewOrderSingle(
      const FIX::OrderCancelRequestAndNewOrderSingleMode& aOrderCancelRequestAndNewOrderSingleMode )
    : Message(MsgType())
    {
      set(aOrderCancelRequestAndNewOrderSingleMode);
    }

    FIELD_SET(*this, FIX::OrderCancelRequestAndNewOrderSingleMode);
    FIELD_SET(*this, FIX::OrderRateLimitExceededMode);
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::CancelClOrdID);
    FIELD_SET(*this, FIX::OrigClOrdID);
    FIELD_SET(*this, FIX::CancelRestrictions);
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
  };

}

#endif
