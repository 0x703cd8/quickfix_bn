#ifndef FIX44_MARKETDATASNAPSHOT_H
#define FIX44_MARKETDATASNAPSHOT_H

#include "Message.h"

namespace FIX44
{

  class MarketDataSnapshot : public Message
  {
  public:
    MarketDataSnapshot() : Message(MsgType()) {}
    MarketDataSnapshot(const FIX::Message& m) : Message(m) {}
    MarketDataSnapshot(const Message& m) : Message(m) {}
    MarketDataSnapshot(const MarketDataSnapshot&) = default;
    MarketDataSnapshot(MarketDataSnapshot&&) = default;
    MarketDataSnapshot& operator=(const MarketDataSnapshot&) = default;
    MarketDataSnapshot& operator=(MarketDataSnapshot&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("W"); }

    MarketDataSnapshot(
      const FIX::MDReqID& aMDReqID,
      const FIX::Symbol& aSymbol )
    : Message(MsgType())
    {
      set(aMDReqID);
      set(aSymbol);
    }

    FIELD_SET(*this, FIX::MDReqID);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::LastBookUpdateID);
    FIELD_SET(*this, FIX::NoMDEntries);
    class NoMDEntries: public FIX::Group
    {
    public:
    NoMDEntries() : FIX::Group(268,269,FIX::message_order(269,270,271,0)) {}
      FIELD_SET(*this, FIX::MDEntryType);
      FIELD_SET(*this, FIX::MDEntryPx);
      FIELD_SET(*this, FIX::MDEntrySize);
    };
  };

}

#endif
