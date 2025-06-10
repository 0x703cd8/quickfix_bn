#ifndef FIX44_ORDERAMENDKEEPPRIORITYREQUEST_H
#define FIX44_ORDERAMENDKEEPPRIORITYREQUEST_H

#include "Message.h"

namespace FIX44
{

  class OrderAmendKeepPriorityRequest : public Message
  {
  public:
    OrderAmendKeepPriorityRequest() : Message(MsgType()) {}
    OrderAmendKeepPriorityRequest(const FIX::Message& m) : Message(m) {}
    OrderAmendKeepPriorityRequest(const Message& m) : Message(m) {}
    OrderAmendKeepPriorityRequest(const OrderAmendKeepPriorityRequest&) = default;
    OrderAmendKeepPriorityRequest(OrderAmendKeepPriorityRequest&&) = default;
    OrderAmendKeepPriorityRequest& operator=(const OrderAmendKeepPriorityRequest&) = default;
    OrderAmendKeepPriorityRequest& operator=(OrderAmendKeepPriorityRequest&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("XAK"); }

    OrderAmendKeepPriorityRequest(
      const FIX::ClOrdID& aClOrdID,
      const FIX::Symbol& aSymbol,
      const FIX::OrderQty& aOrderQty )
    : Message(MsgType())
    {
      set(aClOrdID);
      set(aSymbol);
      set(aOrderQty);
    }

    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::OrigClOrdID);
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::OrderQty);
  };

}

#endif
