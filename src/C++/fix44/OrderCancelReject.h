#ifndef FIX44_ORDERCANCELREJECT_H
#define FIX44_ORDERCANCELREJECT_H

#include "Message.h"

namespace FIX44
{

  class OrderCancelReject : public Message
  {
  public:
    OrderCancelReject() : Message(MsgType()) {}
    OrderCancelReject(const FIX::Message& m) : Message(m) {}
    OrderCancelReject(const Message& m) : Message(m) {}
    OrderCancelReject(const OrderCancelReject&) = default;
    OrderCancelReject(OrderCancelReject&&) = default;
    OrderCancelReject& operator=(const OrderCancelReject&) = default;
    OrderCancelReject& operator=(OrderCancelReject&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("9"); }

    OrderCancelReject(
      const FIX::ClOrdID& aClOrdID,
      const FIX::Symbol& aSymbol,
      const FIX::CxlRejResponseTo& aCxlRejResponseTo,
      const FIX::ErrorCode& aErrorCode,
      const FIX::Text& aText )
    : Message(MsgType())
    {
      set(aClOrdID);
      set(aSymbol);
      set(aCxlRejResponseTo);
      set(aErrorCode);
      set(aText);
    }

    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::OrigClOrdID);
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::OrigClListID);
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::CancelRestrictions);
    FIELD_SET(*this, FIX::CxlRejResponseTo);
    FIELD_SET(*this, FIX::ErrorCode);
    FIELD_SET(*this, FIX::Text);
  };

}

#endif
