// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "MyFirstService.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using boost::shared_ptr;

class MyFirstServiceHandler : virtual public MyFirstServiceIf {
 public:
  MyFirstServiceHandler() {
    // Your initialization goes here
  }

  void log(const std::string& filename) {
    // Your implementation goes here
    printf("log\n");
  }

  int multiply(const int number1, const int number2) {
    // Your implementation goes here
    printf("multiply\n");
    return number1 * number2;
  }

  int get_log_size(const std::string& filename) {
    // Your implementation goes here
    printf("get_log_size\n");
    return 0;
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<MyFirstServiceHandler> handler(new MyFirstServiceHandler());
  shared_ptr<TProcessor> processor(new MyFirstServiceProcessor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

