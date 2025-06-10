#ifndef FIX44_ORDERMASSCANCELREQUEST_H
#define FIX44_ORDERMASSCANCELREQUEST_H

#include "Message.h"

namespace FIX44
{

  class OrderMassCancelRequest : public Message
  {
  public:
    OrderMassCancelRequest() : Message(MsgType()) {}
    OrderMassCancelRequest(const FIX::Message& m) : Message(m) {}
    OrderMassCancelRequest(const Message& m) : Message(m) {}
    OrderMassCancelRequest(const OrderMassCancelRequest&) = default;
    OrderMassCancelRequest(OrderMassCancelRequest&&) = default;
    OrderMassCancelRequest& operator=(const OrderMassCancelRequest&) = default;
    OrderMassCancelRequest& operator=(OrderMassCancelRequest&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("q"); }

    OrderMassCancelRequest(
      const FIX::Symbol& aSymbol,
      const FIX::ClOrdID& aClOrdID,
      const FIX::MassCancelRequestType& aMassCancelRequestType )
    : Message(MsgType())
    {
      set(aSymbol);
      set(aClOrdID);
      set(aMassCancelRequestType);
    }

    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::MassCancelRequestType);
  };

}

#endif
