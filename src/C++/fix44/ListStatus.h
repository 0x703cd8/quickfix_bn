#ifndef FIX44_LISTSTATUS_H
#define FIX44_LISTSTATUS_H

#include "Message.h"

namespace FIX44
{

  class ListStatus : public Message
  {
  public:
    ListStatus() : Message(MsgType()) {}
    ListStatus(const FIX::Message& m) : Message(m) {}
    ListStatus(const Message& m) : Message(m) {}
    ListStatus(const ListStatus&) = default;
    ListStatus(ListStatus&&) = default;
    ListStatus& operator=(const ListStatus&) = default;
    ListStatus& operator=(ListStatus&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("N"); }

    ListStatus(
      const FIX::Symbol& aSymbol,
      const FIX::ListStatusType& aListStatusType,
      const FIX::ListOrderStatus& aListOrderStatus )
    : Message(MsgType())
    {
      set(aSymbol);
      set(aListStatusType);
      set(aListOrderStatus);
    }

    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::ClListID);
    FIELD_SET(*this, FIX::OrigClListID);
    FIELD_SET(*this, FIX::ContingencyType);
    FIELD_SET(*this, FIX::ListStatusType);
    FIELD_SET(*this, FIX::ListOrderStatus);
    FIELD_SET(*this, FIX::ListRejectReason);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::NoOrders);
    class NoOrders: public FIX::Group
    {
    public:
    NoOrders() : FIX::Group(73,11,FIX::message_order(11,55,37,25010,103,25016,58,0)) {}
      FIELD_SET(*this, FIX::ClOrdID);
      FIELD_SET(*this, FIX::Symbol);
      FIELD_SET(*this, FIX::OrderID);
      FIELD_SET(*this, FIX::NoListTriggeringInstructions);
      class NoListTriggeringInstructions: public FIX::Group
      {
      public:
      NoListTriggeringInstructions() : FIX::Group(25010,25011,FIX::message_order(25011,25012,25013,0)) {}
        FIELD_SET(*this, FIX::ListTriggerType);
        FIELD_SET(*this, FIX::ListTriggerTriggerIndex);
        FIELD_SET(*this, FIX::ListTriggerAction);
      };
      FIELD_SET(*this, FIX::OrdRejReason);
      FIELD_SET(*this, FIX::ErrorCode);
      FIELD_SET(*this, FIX::Text);
    };
  };

}

#endif
