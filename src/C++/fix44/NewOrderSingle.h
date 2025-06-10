#ifndef FIX44_NEWORDERSINGLE_H
#define FIX44_NEWORDERSINGLE_H

#include "Message.h"

namespace FIX44
{

  class NewOrderSingle : public Message
  {
  public:
    NewOrderSingle() : Message(MsgType()) {}
    NewOrderSingle(const FIX::Message& m) : Message(m) {}
    NewOrderSingle(const Message& m) : Message(m) {}
    NewOrderSingle(const NewOrderSingle&) = default;
    NewOrderSingle(NewOrderSingle&&) = default;
    NewOrderSingle& operator=(const NewOrderSingle&) = default;
    NewOrderSingle& operator=(NewOrderSingle&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("D"); }

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
    FIELD_SET(*this, FIX::SOR);
  };

}

#endif
