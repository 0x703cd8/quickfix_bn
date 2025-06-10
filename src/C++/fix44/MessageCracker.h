/* -*- C++ -*- */
 
/****************************************************************************
** Copyright (c) 2001-2014
**
** This file is part of the QuickFIX FIX Engine
**
** This file may be distributed under the terms of the quickfixengine.org
** license as defined by quickfixengine.org and appearing in the file
** LICENSE included in the packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.quickfixengine.org/LICENSE for licensing information.
**
** Contact ask@quickfixengine.org if any conditions of this licensing are
** not clear to you.
**
****************************************************************************/

#ifndef FIX44_MESSAGECRACKER_H
#define FIX44_MESSAGECRACKER_H


#include "../SessionID.h"
#include "../Exceptions.h"

#include "../fix44/Message.h"

namespace FIX44
{  
  class Heartbeat; 
  class TestRequest; 
  class Reject; 
  class Logout; 
  class Logon; 
  class LimitQuery; 
  class LimitResponse; 
  class InstrumentListRequest; 
  class InstrumentList; 
  class MarketDataRequest; 
  class MarketDataRequestReject; 
  class MarketDataSnapshot; 
  class MarketDataIncrementalRefresh; 
  class News; 
  class ExecutionReport; 
  class OrderCancelReject; 
  class OrderCancelRequestAndNewOrderSingle; 
  class NewOrderSingle; 
  class NewOrderList; 
  class OrderCancelRequest; 
  class ListStatus; 
  class OrderMassCancelRequest; 
  class OrderMassCancelReport; 
  class OrderAmendKeepPriorityRequest; 
  class OrderAmendReject;

  class MessageCracker
  {
  public:
  virtual ~MessageCracker() {}
  virtual void onMessage( const Message&, const FIX::SessionID& )
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( Message&, const FIX::SessionID& )
    { throw FIX::UnsupportedMessageType(); }
 virtual void onMessage( const Heartbeat&, const FIX::SessionID& ) 
    {}
  virtual void onMessage( const TestRequest&, const FIX::SessionID& ) 
    {}
  virtual void onMessage( const Reject&, const FIX::SessionID& ) 
    {}
  virtual void onMessage( const Logout&, const FIX::SessionID& ) 
    {}
  virtual void onMessage( const Logon&, const FIX::SessionID& ) 
    {}
  virtual void onMessage( const LimitQuery&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const LimitResponse&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const InstrumentListRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const InstrumentList&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const MarketDataRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const MarketDataRequestReject&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const MarketDataSnapshot&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const MarketDataIncrementalRefresh&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const News&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ExecutionReport&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderCancelReject&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderCancelRequestAndNewOrderSingle&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const NewOrderSingle&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const NewOrderList&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderCancelRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const ListStatus&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderMassCancelRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderMassCancelReport&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderAmendKeepPriorityRequest&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( const OrderAmendReject&, const FIX::SessionID& ) 
    { throw FIX::UnsupportedMessageType(); }
  virtual void onMessage( Heartbeat&, const FIX::SessionID& ) {} 
 virtual void onMessage( TestRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( Reject&, const FIX::SessionID& ) {} 
 virtual void onMessage( Logout&, const FIX::SessionID& ) {} 
 virtual void onMessage( Logon&, const FIX::SessionID& ) {} 
 virtual void onMessage( LimitQuery&, const FIX::SessionID& ) {} 
 virtual void onMessage( LimitResponse&, const FIX::SessionID& ) {} 
 virtual void onMessage( InstrumentListRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( InstrumentList&, const FIX::SessionID& ) {} 
 virtual void onMessage( MarketDataRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( MarketDataRequestReject&, const FIX::SessionID& ) {} 
 virtual void onMessage( MarketDataSnapshot&, const FIX::SessionID& ) {} 
 virtual void onMessage( MarketDataIncrementalRefresh&, const FIX::SessionID& ) {} 
 virtual void onMessage( News&, const FIX::SessionID& ) {} 
 virtual void onMessage( ExecutionReport&, const FIX::SessionID& ) {} 
 virtual void onMessage( OrderCancelReject&, const FIX::SessionID& ) {} 
 virtual void onMessage( OrderCancelRequestAndNewOrderSingle&, const FIX::SessionID& ) {} 
 virtual void onMessage( NewOrderSingle&, const FIX::SessionID& ) {} 
 virtual void onMessage( NewOrderList&, const FIX::SessionID& ) {} 
 virtual void onMessage( OrderCancelRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( ListStatus&, const FIX::SessionID& ) {} 
 virtual void onMessage( OrderMassCancelRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( OrderMassCancelReport&, const FIX::SessionID& ) {} 
 virtual void onMessage( OrderAmendKeepPriorityRequest&, const FIX::SessionID& ) {} 
 virtual void onMessage( OrderAmendReject&, const FIX::SessionID& ) {} 

public:
  void crack( const Message& message, 
              const FIX::SessionID& sessionID )
  {
    const std::string & msgTypeValue 
      = message.getHeader().getField( FIX::FIELD::MsgType );
    
    
    if( msgTypeValue == "0" )
      return onMessage( (const Heartbeat&)message, sessionID );
    
    if( msgTypeValue == "1" )
      return onMessage( (const TestRequest&)message, sessionID );
    
    if( msgTypeValue == "3" )
      return onMessage( (const Reject&)message, sessionID );
    
    if( msgTypeValue == "5" )
      return onMessage( (const Logout&)message, sessionID );
    
    if( msgTypeValue == "A" )
      return onMessage( (const Logon&)message, sessionID );
    
    if( msgTypeValue == "XLQ" )
      return onMessage( (const LimitQuery&)message, sessionID );
    
    if( msgTypeValue == "XLR" )
      return onMessage( (const LimitResponse&)message, sessionID );
    
    if( msgTypeValue == "x" )
      return onMessage( (const InstrumentListRequest&)message, sessionID );
    
    if( msgTypeValue == "y" )
      return onMessage( (const InstrumentList&)message, sessionID );
    
    if( msgTypeValue == "V" )
      return onMessage( (const MarketDataRequest&)message, sessionID );
    
    if( msgTypeValue == "Y" )
      return onMessage( (const MarketDataRequestReject&)message, sessionID );
    
    if( msgTypeValue == "W" )
      return onMessage( (const MarketDataSnapshot&)message, sessionID );
    
    if( msgTypeValue == "X" )
      return onMessage( (const MarketDataIncrementalRefresh&)message, sessionID );
    
    if( msgTypeValue == "B" )
      return onMessage( (const News&)message, sessionID );
    
    if( msgTypeValue == "8" )
      return onMessage( (const ExecutionReport&)message, sessionID );
    
    if( msgTypeValue == "9" )
      return onMessage( (const OrderCancelReject&)message, sessionID );
    
    if( msgTypeValue == "XCN" )
      return onMessage( (const OrderCancelRequestAndNewOrderSingle&)message, sessionID );
    
    if( msgTypeValue == "D" )
      return onMessage( (const NewOrderSingle&)message, sessionID );
    
    if( msgTypeValue == "E" )
      return onMessage( (const NewOrderList&)message, sessionID );
    
    if( msgTypeValue == "F" )
      return onMessage( (const OrderCancelRequest&)message, sessionID );
    
    if( msgTypeValue == "N" )
      return onMessage( (const ListStatus&)message, sessionID );
    
    if( msgTypeValue == "q" )
      return onMessage( (const OrderMassCancelRequest&)message, sessionID );
    
    if( msgTypeValue == "r" )
      return onMessage( (const OrderMassCancelReport&)message, sessionID );
    
    if( msgTypeValue == "XAK" )
      return onMessage( (const OrderAmendKeepPriorityRequest&)message, sessionID );
    
    if( msgTypeValue == "XAR" )
      return onMessage( (const OrderAmendReject&)message, sessionID );
    
    return onMessage( message, sessionID );
  }
  
void crack( Message& message, 
            const FIX::SessionID& sessionID )
  {
    const std::string & msgTypeValue 
      = message.getHeader().getField( FIX::FIELD::MsgType );
    
    
    if( msgTypeValue == "0" )
      return onMessage( (Heartbeat&)message, sessionID );
    
    if( msgTypeValue == "1" )
      return onMessage( (TestRequest&)message, sessionID );
    
    if( msgTypeValue == "3" )
      return onMessage( (Reject&)message, sessionID );
    
    if( msgTypeValue == "5" )
      return onMessage( (Logout&)message, sessionID );
    
    if( msgTypeValue == "A" )
      return onMessage( (Logon&)message, sessionID );
    
    if( msgTypeValue == "XLQ" )
      return onMessage( (LimitQuery&)message, sessionID );
    
    if( msgTypeValue == "XLR" )
      return onMessage( (LimitResponse&)message, sessionID );
    
    if( msgTypeValue == "x" )
      return onMessage( (InstrumentListRequest&)message, sessionID );
    
    if( msgTypeValue == "y" )
      return onMessage( (InstrumentList&)message, sessionID );
    
    if( msgTypeValue == "V" )
      return onMessage( (MarketDataRequest&)message, sessionID );
    
    if( msgTypeValue == "Y" )
      return onMessage( (MarketDataRequestReject&)message, sessionID );
    
    if( msgTypeValue == "W" )
      return onMessage( (MarketDataSnapshot&)message, sessionID );
    
    if( msgTypeValue == "X" )
      return onMessage( (MarketDataIncrementalRefresh&)message, sessionID );
    
    if( msgTypeValue == "B" )
      return onMessage( (News&)message, sessionID );
    
    if( msgTypeValue == "8" )
      return onMessage( (ExecutionReport&)message, sessionID );
    
    if( msgTypeValue == "9" )
      return onMessage( (OrderCancelReject&)message, sessionID );
    
    if( msgTypeValue == "XCN" )
      return onMessage( (OrderCancelRequestAndNewOrderSingle&)message, sessionID );
    
    if( msgTypeValue == "D" )
      return onMessage( (NewOrderSingle&)message, sessionID );
    
    if( msgTypeValue == "E" )
      return onMessage( (NewOrderList&)message, sessionID );
    
    if( msgTypeValue == "F" )
      return onMessage( (OrderCancelRequest&)message, sessionID );
    
    if( msgTypeValue == "N" )
      return onMessage( (ListStatus&)message, sessionID );
    
    if( msgTypeValue == "q" )
      return onMessage( (OrderMassCancelRequest&)message, sessionID );
    
    if( msgTypeValue == "r" )
      return onMessage( (OrderMassCancelReport&)message, sessionID );
    
    if( msgTypeValue == "XAK" )
      return onMessage( (OrderAmendKeepPriorityRequest&)message, sessionID );
    
    if( msgTypeValue == "XAR" )
      return onMessage( (OrderAmendReject&)message, sessionID );
    
    return onMessage( message, sessionID );
  }

  };
}

#endif
