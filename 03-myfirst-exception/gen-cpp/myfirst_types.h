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


namespace myfirst {

struct MyEnum {
  enum type {
    ENUM1 = 0,
    ENUM2 = 1,
    ENUM3 = 2
  };
};

extern const std::map<int, const char*> _MyEnum_VALUES_TO_NAMES;

// typedef int32_t int;

class MyStruct;

class MyUnion;

class DivisionByZeroError;

class WrongTypeError;

class MyError;

typedef struct _MyStruct__isset {
  _MyStruct__isset() : mybool(false), mybyte(false), myi16(false), myi32(false), myi64(false), mydouble(false), mystring(false), mylist(false), myset(false), mymap(false) {}
  bool mybool :1;
  bool mybyte :1;
  bool myi16 :1;
  bool myi32 :1;
  bool myi64 :1;
  bool mydouble :1;
  bool mystring :1;
  bool mylist :1;
  bool myset :1;
  bool mymap :1;
} _MyStruct__isset;

class MyStruct {
 public:

  MyStruct(const MyStruct&);
  MyStruct& operator=(const MyStruct&);
  MyStruct() : mybool(0), mybyte(0), myi16(0), myi32(0), myi64(0), mydouble(0), mystring() {
  }

  virtual ~MyStruct() throw();
  bool mybool;
  int8_t mybyte;
  int16_t myi16;
  int32_t myi32;
  int64_t myi64;
  double mydouble;
  std::string mystring;
  std::vector<int32_t>  mylist;
  std::set<int32_t>  myset;
  std::map<int32_t, int32_t>  mymap;

  _MyStruct__isset __isset;

  void __set_mybool(const bool val);

  void __set_mybyte(const int8_t val);

  void __set_myi16(const int16_t val);

  void __set_myi32(const int32_t val);

  void __set_myi64(const int64_t val);

  void __set_mydouble(const double val);

  void __set_mystring(const std::string& val);

  void __set_mylist(const std::vector<int32_t> & val);

  void __set_myset(const std::set<int32_t> & val);

  void __set_mymap(const std::map<int32_t, int32_t> & val);

  bool operator == (const MyStruct & rhs) const
  {
    if (!(mybool == rhs.mybool))
      return false;
    if (!(mybyte == rhs.mybyte))
      return false;
    if (!(myi16 == rhs.myi16))
      return false;
    if (!(myi32 == rhs.myi32))
      return false;
    if (!(myi64 == rhs.myi64))
      return false;
    if (!(mydouble == rhs.mydouble))
      return false;
    if (!(mystring == rhs.mystring))
      return false;
    if (!(mylist == rhs.mylist))
      return false;
    if (!(myset == rhs.myset))
      return false;
    if (!(mymap == rhs.mymap))
      return false;
    return true;
  }
  bool operator != (const MyStruct &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MyStruct & ) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(MyStruct &a, MyStruct &b);

inline std::ostream& operator<<(std::ostream& out, const MyStruct& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _MyUnion__isset {
  _MyUnion__isset() : mybool(false), mystring(false) {}
  bool mybool :1;
  bool mystring :1;
} _MyUnion__isset;

class MyUnion {
 public:

  MyUnion(const MyUnion&);
  MyUnion& operator=(const MyUnion&);
  MyUnion() : mybool(0), mystring() {
  }

  virtual ~MyUnion() throw();
  bool mybool;
  std::string mystring;

  _MyUnion__isset __isset;

  void __set_mybool(const bool val);

  void __set_mystring(const std::string& val);

  bool operator == (const MyUnion & rhs) const
  {
    if (!(mybool == rhs.mybool))
      return false;
    if (!(mystring == rhs.mystring))
      return false;
    return true;
  }
  bool operator != (const MyUnion &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MyUnion & ) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(MyUnion &a, MyUnion &b);

inline std::ostream& operator<<(std::ostream& out, const MyUnion& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _DivisionByZeroError__isset {
  _DivisionByZeroError__isset() : description(false) {}
  bool description :1;
} _DivisionByZeroError__isset;

class DivisionByZeroError : public ::apache::thrift::TException {
 public:

  DivisionByZeroError(const DivisionByZeroError&);
  DivisionByZeroError& operator=(const DivisionByZeroError&);
  DivisionByZeroError() : description() {
  }

  virtual ~DivisionByZeroError() throw();
  std::string description;

  _DivisionByZeroError__isset __isset;

  void __set_description(const std::string& val);

  bool operator == (const DivisionByZeroError & rhs) const
  {
    if (!(description == rhs.description))
      return false;
    return true;
  }
  bool operator != (const DivisionByZeroError &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const DivisionByZeroError & ) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(DivisionByZeroError &a, DivisionByZeroError &b);

inline std::ostream& operator<<(std::ostream& out, const DivisionByZeroError& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _WrongTypeError__isset {
  _WrongTypeError__isset() : description(false) {}
  bool description :1;
} _WrongTypeError__isset;

class WrongTypeError : public ::apache::thrift::TException {
 public:

  WrongTypeError(const WrongTypeError&);
  WrongTypeError& operator=(const WrongTypeError&);
  WrongTypeError() : description() {
  }

  virtual ~WrongTypeError() throw();
  std::string description;

  _WrongTypeError__isset __isset;

  void __set_description(const std::string& val);

  bool operator == (const WrongTypeError & rhs) const
  {
    if (!(description == rhs.description))
      return false;
    return true;
  }
  bool operator != (const WrongTypeError &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const WrongTypeError & ) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(WrongTypeError &a, WrongTypeError &b);

inline std::ostream& operator<<(std::ostream& out, const WrongTypeError& obj)
{
  obj.printTo(out);
  return out;
}

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

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t write(Protocol_* oprot) const;

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

} // namespace

#include "myfirst_types.tcc"

#endif
