/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "myfirst_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace myfirst {

int _kMyEnumValues[] = {
  MyEnum::ENUM1,
  MyEnum::ENUM2,
  MyEnum::ENUM3
};
const char* _kMyEnumNames[] = {
  "ENUM1",
  "ENUM2",
  "ENUM3"
};
const std::map<int, const char*> _MyEnum_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(3, _kMyEnumValues, _kMyEnumNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));


MyStruct::~MyStruct() throw() {
}


void MyStruct::__set_mybool(const bool val) {
  this->mybool = val;
}

void MyStruct::__set_mybyte(const int8_t val) {
  this->mybyte = val;
}

void MyStruct::__set_myi16(const int16_t val) {
  this->myi16 = val;
}

void MyStruct::__set_myi32(const int32_t val) {
  this->myi32 = val;
}

void MyStruct::__set_myi64(const int64_t val) {
  this->myi64 = val;
}

void MyStruct::__set_mydouble(const double val) {
  this->mydouble = val;
}

void MyStruct::__set_mystring(const std::string& val) {
  this->mystring = val;
}

void MyStruct::__set_mylist(const std::vector<int32_t> & val) {
  this->mylist = val;
}

void MyStruct::__set_myset(const std::set<int32_t> & val) {
  this->myset = val;
}

void MyStruct::__set_mymap(const std::map<int32_t, int32_t> & val) {
  this->mymap = val;
}

void swap(MyStruct &a, MyStruct &b) {
  using ::std::swap;
  swap(a.mybool, b.mybool);
  swap(a.mybyte, b.mybyte);
  swap(a.myi16, b.myi16);
  swap(a.myi32, b.myi32);
  swap(a.myi64, b.myi64);
  swap(a.mydouble, b.mydouble);
  swap(a.mystring, b.mystring);
  swap(a.mylist, b.mylist);
  swap(a.myset, b.myset);
  swap(a.mymap, b.mymap);
  swap(a.__isset, b.__isset);
}

MyStruct::MyStruct(const MyStruct& other21) {
  mybool = other21.mybool;
  mybyte = other21.mybyte;
  myi16 = other21.myi16;
  myi32 = other21.myi32;
  myi64 = other21.myi64;
  mydouble = other21.mydouble;
  mystring = other21.mystring;
  mylist = other21.mylist;
  myset = other21.myset;
  mymap = other21.mymap;
  __isset = other21.__isset;
}
MyStruct& MyStruct::operator=(const MyStruct& other22) {
  mybool = other22.mybool;
  mybyte = other22.mybyte;
  myi16 = other22.myi16;
  myi32 = other22.myi32;
  myi64 = other22.myi64;
  mydouble = other22.mydouble;
  mystring = other22.mystring;
  mylist = other22.mylist;
  myset = other22.myset;
  mymap = other22.mymap;
  __isset = other22.__isset;
  return *this;
}
void MyStruct::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "MyStruct(";
  out << "mybool=" << to_string(mybool);
  out << ", " << "mybyte=" << to_string(mybyte);
  out << ", " << "myi16=" << to_string(myi16);
  out << ", " << "myi32=" << to_string(myi32);
  out << ", " << "myi64=" << to_string(myi64);
  out << ", " << "mydouble=" << to_string(mydouble);
  out << ", " << "mystring=" << to_string(mystring);
  out << ", " << "mylist=" << to_string(mylist);
  out << ", " << "myset=" << to_string(myset);
  out << ", " << "mymap=" << to_string(mymap);
  out << ")";
}


MyUnion::~MyUnion() throw() {
}


void MyUnion::__set_mybool(const bool val) {
  this->mybool = val;
}

void MyUnion::__set_mystring(const std::string& val) {
  this->mystring = val;
}

void swap(MyUnion &a, MyUnion &b) {
  using ::std::swap;
  swap(a.mybool, b.mybool);
  swap(a.mystring, b.mystring);
  swap(a.__isset, b.__isset);
}

MyUnion::MyUnion(const MyUnion& other23) {
  mybool = other23.mybool;
  mystring = other23.mystring;
  __isset = other23.__isset;
}
MyUnion& MyUnion::operator=(const MyUnion& other24) {
  mybool = other24.mybool;
  mystring = other24.mystring;
  __isset = other24.__isset;
  return *this;
}
void MyUnion::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "MyUnion(";
  out << "mybool=" << to_string(mybool);
  out << ", " << "mystring=" << to_string(mystring);
  out << ")";
}


DivisionByZeroError::~DivisionByZeroError() throw() {
}


void DivisionByZeroError::__set_description(const std::string& val) {
  this->description = val;
}

void swap(DivisionByZeroError &a, DivisionByZeroError &b) {
  using ::std::swap;
  swap(a.description, b.description);
  swap(a.__isset, b.__isset);
}

DivisionByZeroError::DivisionByZeroError(const DivisionByZeroError& other25) : TException() {
  description = other25.description;
  __isset = other25.__isset;
}
DivisionByZeroError& DivisionByZeroError::operator=(const DivisionByZeroError& other26) {
  description = other26.description;
  __isset = other26.__isset;
  return *this;
}
void DivisionByZeroError::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "DivisionByZeroError(";
  out << "description=" << to_string(description);
  out << ")";
}

const char* DivisionByZeroError::what() const throw() {
  try {
    std::stringstream ss;
    ss << "TException - service has thrown: " << *this;
    this->thriftTExceptionMessageHolder_ = ss.str();
    return this->thriftTExceptionMessageHolder_.c_str();
  } catch (const std::exception&) {
    return "TException - service has thrown: DivisionByZeroError";
  }
}


WrongTypeError::~WrongTypeError() throw() {
}


void WrongTypeError::__set_description(const std::string& val) {
  this->description = val;
}

void swap(WrongTypeError &a, WrongTypeError &b) {
  using ::std::swap;
  swap(a.description, b.description);
  swap(a.__isset, b.__isset);
}

WrongTypeError::WrongTypeError(const WrongTypeError& other27) : TException() {
  description = other27.description;
  __isset = other27.__isset;
}
WrongTypeError& WrongTypeError::operator=(const WrongTypeError& other28) {
  description = other28.description;
  __isset = other28.__isset;
  return *this;
}
void WrongTypeError::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "WrongTypeError(";
  out << "description=" << to_string(description);
  out << ")";
}

const char* WrongTypeError::what() const throw() {
  try {
    std::stringstream ss;
    ss << "TException - service has thrown: " << *this;
    this->thriftTExceptionMessageHolder_ = ss.str();
    return this->thriftTExceptionMessageHolder_.c_str();
  } catch (const std::exception&) {
    return "TException - service has thrown: WrongTypeError";
  }
}


MyError::~MyError() throw() {
}


void MyError::__set_error_code(const int val) {
  this->error_code = val;
}

void MyError::__set_error_description(const std::string& val) {
  this->error_description = val;
}

void swap(MyError &a, MyError &b) {
  using ::std::swap;
  swap(a.error_code, b.error_code);
  swap(a.error_description, b.error_description);
  swap(a.__isset, b.__isset);
}

MyError::MyError(const MyError& other29) : TException() {
  error_code = other29.error_code;
  error_description = other29.error_description;
  __isset = other29.__isset;
}
MyError& MyError::operator=(const MyError& other30) {
  error_code = other30.error_code;
  error_description = other30.error_description;
  __isset = other30.__isset;
  return *this;
}
void MyError::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "MyError(";
  out << "error_code=" << to_string(error_code);
  out << ", " << "error_description=" << to_string(error_description);
  out << ")";
}

const char* MyError::what() const throw() {
  try {
    std::stringstream ss;
    ss << "TException - service has thrown: " << *this;
    this->thriftTExceptionMessageHolder_ = ss.str();
    return this->thriftTExceptionMessageHolder_.c_str();
  } catch (const std::exception&) {
    return "TException - service has thrown: MyError";
  }
}

} // namespace
