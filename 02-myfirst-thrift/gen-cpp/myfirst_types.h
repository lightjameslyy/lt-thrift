/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef myfirst_TYPES_H
#define myfirst_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>




//typedef int32_t int;

class MyError;

typedef struct _MyError__isset {
  _MyError__isset() : error_code(false), error_description(false) {}
  bool error_code :1;
  bool error_description :1;
} _MyError__isset;

class MyError : public ::apache::thrift::TException {
 public:

  MyError(const MyError&);
  MyError& operator=(const MyError&);
  MyError() : error_code(0), error_description() {
  }

  virtual ~MyError() throw();
  int error_code;
  std::string error_description;

  _MyError__isset __isset;

  void __set_error_code(const int val);

  void __set_error_description(const std::string& val);

  bool operator == (const MyError & rhs) const
  {
    if (!(error_code == rhs.error_code))
      return false;
    if (!(error_description == rhs.error_description))
      return false;
    return true;
  }
  bool operator != (const MyError &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MyError & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(MyError &a, MyError &b);

inline std::ostream& operator<<(std::ostream& out, const MyError& obj)
{
  obj.printTo(out);
  return out;
}



#endif
