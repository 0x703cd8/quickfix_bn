require 'quickfix'
module Quickfix44
class Message < Quickfix::Message
	def initialize
		super
		getHeader().setField( Quickfix::BeginString.new("FIX.4.4") )
	end
end

class Heartbeat < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("0") )
	end
end

class TestRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("1") )
	end
end

class Reject < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("3") )
	end
end

class Logout < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("5") )
	end
end

class Logon < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("A") )
	end
end

class LimitQuery < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("XLQ") )
	end
end

class LimitResponse < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("XLR") )
	end

	class NoLimitIndicators < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(6)
			order[0] = 25004
			order[1] = 25005
			order[2] = 25006
			order[3] = 25007
			order[4] = 25008
			order[5] = 0
			super(25003, 25004, order)
		end
	end
end

class InstrumentListRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("x") )
	end
end

class InstrumentList < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("y") )
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(10)
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
			super(146, 55, order)
		end
	end
end

class MarketDataRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("V") )
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 55
			order[1] = 0
			super(146, 55, order)
		end
	end

	class NoMDEntryTypes < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 269
			order[1] = 0
			super(267, 269, order)
		end
	end
end

class MarketDataRequestReject < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("Y") )
	end
end

class MarketDataSnapshot < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("W") )
	end

	class NoMDEntries < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 269
			order[1] = 270
			order[2] = 271
			order[3] = 0
			super(268, 269, order)
		end
	end
end

class MarketDataIncrementalRefresh < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("X") )
	end

	class NoMDEntries < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(11)
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
			super(268, 279, order)
		end
	end
end

class News < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("B") )
	end
end

class ExecutionReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("8") )
	end

	class NoMiscFees < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 137
			order[1] = 138
			order[2] = 139
			order[3] = 0
			super(136, 137, order)
		end
	end
end

class OrderCancelReject < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("9") )
	end
end

class OrderCancelRequestAndNewOrderSingle < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("XCN") )
	end
end

class NewOrderSingle < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("D") )
	end
end

class NewOrderList < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("E") )
	end

	class NoOrders < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(15)
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
			super(73, 11, order)
		end

		class NoListTriggeringInstructions < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 25011
				order[1] = 25012
				order[2] = 25013
				order[3] = 0
				super(25010, 25011, order)
			end
		end
	end
end

class OrderCancelRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("F") )
	end
end

class ListStatus < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("N") )
	end

	class NoOrders < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(8)
			order[0] = 11
			order[1] = 55
			order[2] = 37
			order[3] = 25010
			order[4] = 103
			order[5] = 25016
			order[6] = 58
			order[7] = 0
			super(73, 11, order)
		end

		class NoListTriggeringInstructions < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 25011
				order[1] = 25012
				order[2] = 25013
				order[3] = 0
				super(25010, 25011, order)
			end
		end
	end
end

class OrderMassCancelRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("q") )
	end
end

class OrderMassCancelReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("r") )
	end
end

class OrderAmendKeepPriorityRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("XAK") )
	end
end

class OrderAmendReject < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("XAR") )
	end
end
end
