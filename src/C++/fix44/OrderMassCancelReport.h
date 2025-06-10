#ifndef FIX44_ORDERMASSCANCELREPORT_H
#define FIX44_ORDERMASSCANCELREPORT_H

#include "Message.h"

namespace FIX44
{

  class OrderMassCancelReport : public Message
  {
  public:
    OrderMassCancelReport() : Message(MsgType()) {}
    OrderMassCancelReport(const FIX::Message& m) : Message(m) {}
    OrderMassCancelReport(const Message& m) : Message(m) {}
    OrderMassCancelReport(const OrderMassCancelReport&) = default;
    OrderMassCancelReport(OrderMassCancelReport&&) = default;
    OrderMassCancelReport& operator=(const OrderMassCancelReport&) = default;
    OrderMassCancelReport& operator=(OrderMassCancelReport&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("r"); }

    OrderMassCancelReport(
      const FIX::Symbol& aSymbol,
      const FIX::ClOrdID& aClOrdID,
      const FIX::MassCancelRequestType& aMassCancelRequestType,
      const FIX::MassCancelResponse& aMassCancelResponse )
    : Message(MsgType())
    {
      set(aSymbol);
      set(aClOrdID);
      set(aMassCancelRequestType);
      set(aMassCancelResponse);
    }

    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::ClOrdID);
    FIELD_SET(*this, FIX::MassCancelRequestType);
    FIELD_SET(*this, FIX::MassCancelResponse);
    FIELD_SET(*this, FIX::MassCancelRejectReason);
    FIELD_SET(*this, FIX::TotalAffectedOrders);
    FIELD_SET(*this, FIX::ErrorCode);
    FIELD_SET(*this, FIX::Text);
  };

}

#endif
