/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef message_TYPES_H
#define message_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>




class Message;

typedef struct _Message__isset {
  _Message__isset() : id(false), content(false) {}
  bool id :1;
  bool content :1;
} _Message__isset;

class Message {
 public:

  Message(const Message&);
  Message& operator=(const Message&);
  Message() : id(), content() {
  }

  virtual ~Message() throw();
  std::string id;
  std::string content;

  _Message__isset __isset;

  void __set_id(const std::string& val);

  void __set_content(const std::string& val);

  bool operator == (const Message & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (!(content == rhs.content))
      return false;
    return true;
  }
  bool operator != (const Message &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Message & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Message &a, Message &b);

inline std::ostream& operator<<(std::ostream& out, const Message& obj)
{
  obj.printTo(out);
  return out;
}



#endif
