#ifndef FIX44_NEWS_H
#define FIX44_NEWS_H

#include "Message.h"

namespace FIX44
{

  class News : public Message
  {
  public:
    News() : Message(MsgType()) {}
    News(const FIX::Message& m) : Message(m) {}
    News(const Message& m) : Message(m) {}
    News(const News&) = default;
    News(News&&) = default;
    News& operator=(const News&) = default;
    News& operator=(News&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("B"); }

    News(
      const FIX::Headline& aHeadline )
    : Message(MsgType())
    {
      set(aHeadline);
    }

    FIELD_SET(*this, FIX::Headline);
  };

}

#endif
