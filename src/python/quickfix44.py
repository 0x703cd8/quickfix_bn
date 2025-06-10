import quickfix as fix

class Message(fix.Message):
	def __init__(self):
		fix.Message.__init__(self)
		self.getHeader().setField( fix.BeginString("FIX.4.4") )

class Heartbeat(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("0") )

class TestRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("1") )

class Reject(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("3") )

class Logout(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("5") )

class Logon(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("A") )

class LimitQuery(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("XLQ") )

class LimitResponse(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("XLR") )

	class NoLimitIndicators(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 25004
			order[1] = 25005
			order[2] = 25006
			order[3] = 25007
			order[4] = 25008
			order[5] = 0
			fix.Group.__init__(self, 25003, 25004, order)

class InstrumentListRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("x") )

class InstrumentList(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("y") )

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(10)
			order[0] = 55
			order[1] = 15
			order[2] = 562
			order[3] = 1140
			order[4] = 25039
			order[5] = 25040
			order[6] = 25041
			order[7] = 25042
			order[8] = 969
			order[9] = 0
			fix.Group.__init__(self, 146, 55, order)

class MarketDataRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("V") )

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 55
			order[1] = 0
			fix.Group.__init__(self, 146, 55, order)

	class NoMDEntryTypes(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 269
			order[1] = 0
			fix.Group.__init__(self, 267, 269, order)

class MarketDataRequestReject(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("Y") )

class MarketDataSnapshot(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("W") )

	class NoMDEntries(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 269
			order[1] = 270
			order[2] = 271
			order[3] = 0
			fix.Group.__init__(self, 268, 269, order)

class MarketDataIncrementalRefresh(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("X") )

	class NoMDEntries(fix.Group):
		def __init__(self):
			order = fix.IntArray(11)
			order[0] = 279
			order[1] = 270
			order[2] = 271
			order[3] = 269
			order[4] = 55
			order[5] = 60
			order[6] = 1003
			order[7] = 2446
			order[8] = 25043
			order[9] = 25044
			order[10] = 0
			fix.Group.__init__(self, 268, 279, order)

class News(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("B") )

class ExecutionReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("8") )

	class NoMiscFees(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 137
			order[1] = 138
			order[2] = 139
			order[3] = 0
			fix.Group.__init__(self, 136, 137, order)

class OrderCancelReject(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("9") )

class OrderCancelRequestAndNewOrderSingle(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("XCN") )

class NewOrderSingle(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("D") )

class NewOrderList(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("E") )

	class NoOrders(fix.Group):
		def __init__(self):
			order = fix.IntArray(15)
			order[0] = 11
			order[1] = 38
			order[2] = 40
			order[3] = 18
			order[4] = 44
			order[5] = 54
			order[6] = 55
			order[7] = 59
			order[8] = 111
			order[9] = 152
			order[10] = 847
			order[11] = 7940
			order[12] = 25001
			order[13] = 25010
			order[14] = 0
			fix.Group.__init__(self, 73, 11, order)

		class NoListTriggeringInstructions(fix.Group):
			def __init__(self):
				order = fix.IntArray(4)
				order[0] = 25011
				order[1] = 25012
				order[2] = 25013
				order[3] = 0
				fix.Group.__init__(self, 25010, 25011, order)

class OrderCancelRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("F") )

class ListStatus(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("N") )

	class NoOrders(fix.Group):
		def __init__(self):
			order = fix.IntArray(8)
			order[0] = 11
			order[1] = 55
			order[2] = 37
			order[3] = 25010
			order[4] = 103
			order[5] = 25016
			order[6] = 58
			order[7] = 0
			fix.Group.__init__(self, 73, 11, order)

		class NoListTriggeringInstructions(fix.Group):
			def __init__(self):
				order = fix.IntArray(4)
				order[0] = 25011
				order[1] = 25012
				order[2] = 25013
				order[3] = 0
				fix.Group.__init__(self, 25010, 25011, order)

class OrderMassCancelRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("q") )

class OrderMassCancelReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("r") )

class OrderAmendKeepPriorityRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("XAK") )

class OrderAmendReject(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("XAR") )
