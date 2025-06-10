#ifndef FIX44_ORDERAMENDREJECT_H
#define FIX44_ORDERAMENDREJECT_H

#include "Message.h"

namespace FIX44
{

  class OrderAmendReject : public Message
  {
  public:
    OrderAmendReject() : Message(MsgType()) {}
    OrderAmendReject(const FIX::Message& m) : Message(m) {}
    OrderAmendReject(const Message& m) : Message(m) {}
    OrderAmendReject(const OrderAmendReject&) = default;
    OrderAmendReject(OrderAmendReject&&) = default;
    OrderAmendReject& operator=(const OrderAmendReject&) = default;
    OrderAmendReject& operator=(OrderAmendReject&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("XAR"); }

    OrderAmendReject(
      const FIX::ClOrdID& aClOrdID,
      const FIX::Symbol& aSymbol,
      const FIX::OrderQty& aOrderQty,
      const FIX::ErrorCode& aErrorCode,
      const FIX::Text& aText )
    : Message(MsgType())
    {
      set(aClOrdID);
      set(aSymbol);
      set(aOrderQty);
      set(aErrorCode);
      set(aText);
    }

    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::OrigClOrdID);
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::OrderQty);
    FIELD_SET(*this, FIX::ErrorCode);
    FIELD_SET(*this, FIX::Text);
  };

}

#endif
