#ifndef FIX44_ORDERCANCELREQUEST_H
#define FIX44_ORDERCANCELREQUEST_H

#include "Message.h"

namespace FIX44
{

  class OrderCancelRequest : public Message
  {
  public:
    OrderCancelRequest() : Message(MsgType()) {}
    OrderCancelRequest(const FIX::Message& m) : Message(m) {}
    OrderCancelRequest(const Message& m) : Message(m) {}
    OrderCancelRequest(const OrderCancelRequest&) = default;
    OrderCancelRequest(OrderCancelRequest&&) = default;
    OrderCancelRequest& operator=(const OrderCancelRequest&) = default;
    OrderCancelRequest& operator=(OrderCancelRequest&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("F"); }

    OrderCancelRequest(
      const FIX::ClOrdID& aClOrdID,
      const FIX::Symbol& aSymbol )
    : Message(MsgType())
    {
      set(aClOrdID);
      set(aSymbol);
    }

    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::OrigClOrdID);
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::OrigClListID);
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::CancelRestrictions);
  };

}

#endif
