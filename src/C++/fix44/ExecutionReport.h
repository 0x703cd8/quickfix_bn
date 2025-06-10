#ifndef FIX44_EXECUTIONREPORT_H
#define FIX44_EXECUTIONREPORT_H

#include "Message.h"

namespace FIX44
{

  class ExecutionReport : public Message
  {
  public:
    ExecutionReport() : Message(MsgType()) {}
    ExecutionReport(const FIX::Message& m) : Message(m) {}
    ExecutionReport(const Message& m) : Message(m) {}
    ExecutionReport(const ExecutionReport&) = default;
    ExecutionReport(ExecutionReport&&) = default;
    ExecutionReport& operator=(const ExecutionReport&) = default;
    ExecutionReport& operator=(ExecutionReport&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("8"); }

    ExecutionReport(
      const FIX::OrdType& aOrdType,
      const FIX::Side& aSide,
      const FIX::Symbol& aSymbol,
      const FIX::ExecType& aExecType,
      const FIX::CumQty& aCumQty,
      const FIX::LastQty& aLastQty,
      const FIX::OrdStatus& aOrdStatus )
    : Message(MsgType())
    {
      set(aOrdType);
      set(aSide);
      set(aSymbol);
      set(aExecType);
      set(aCumQty);
      set(aLastQty);
      set(aOrdStatus);
    }

    FIELD_SET(*this, FIX::ExecID);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::OrigClOrdID);
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::OrderQty);
    FIELD_SET(*this, FIX::OrdType);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::ExecInst);
    FIELD_SET(*this, FIX::Price);
    FIELD_SET(*this, FIX::TriggerType);
    FIELD_SET(*this, FIX::TriggerAction);
    FIELD_SET(*this, FIX::TriggerPrice);
    FIELD_SET(*this, FIX::TriggerPriceType);
    FIELD_SET(*this, FIX::TriggerPriceDirection);
    FIELD_SET(*this, FIX::TriggerTrailingDeltaBips);
    FIELD_SET(*this, FIX::TimeInForce);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::OrderCreationTime);
    FIELD_SET(*this, FIX::MaxFloor);
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::CashOrderQty);
    FIELD_SET(*this, FIX::TargetStrategy);
    FIELD_SET(*this, FIX::StrategyID);
    FIELD_SET(*this, FIX::SelfTradePreventionMode);
    FIELD_SET(*this, FIX::ExecType);
    FIELD_SET(*this, FIX::CumQty);
    FIELD_SET(*this, FIX::LeavesQty);
    FIELD_SET(*this, FIX::CumQuoteQty);
    FIELD_SET(*this, FIX::AggressorIndicator);
    FIELD_SET(*this, FIX::TradeID);
    FIELD_SET(*this, FIX::LastPx);
    FIELD_SET(*this, FIX::LastQty);
    FIELD_SET(*this, FIX::OrdStatus);
    FIELD_SET(*this, FIX::AllocID);
    FIELD_SET(*this, FIX::MatchType);
    FIELD_SET(*this, FIX::WorkingFloor);
    FIELD_SET(*this, FIX::WorkingIndicator);
    FIELD_SET(*this, FIX::WorkingTime);
    FIELD_SET(*this, FIX::TrailingTime);
    FIELD_SET(*this, FIX::PreventedMatchID);
    FIELD_SET(*this, FIX::PreventedExecutionPrice);
    FIELD_SET(*this, FIX::PreventedExecutionQty);
    FIELD_SET(*this, FIX::TradeGroupID);
    FIELD_SET(*this, FIX::CounterSymbol);
    FIELD_SET(*this, FIX::CounterOrderID);
    FIELD_SET(*this, FIX::PreventedQty);
    FIELD_SET(*this, FIX::LastPreventedQty);
    FIELD_SET(*this, FIX::SOR);
    FIELD_SET(*this, FIX::OrdRejReason);
    FIELD_SET(*this, FIX::ErrorCode);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::NoMiscFees);
    class NoMiscFees: public FIX::Group
    {
    public:
    NoMiscFees() : FIX::Group(136,137,FIX::message_order(137,138,139,0)) {}
      FIELD_SET(*this, FIX::MiscFeeAmt);
      FIELD_SET(*this, FIX::MiscFeeCurr);
      FIELD_SET(*this, FIX::MiscFeeType);
    };
  };

}

#endif
