#include "MessageService.h"
#include <thrift/transport/TSocket.h>
#include <thrift/transport/TBufferTransports.h>
#include <thrift/protocol/TBinaryProtocol.h>
#include <iostream>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;

using boost::shared_ptr;

int main(int argc, char **argv) {
  // shared_ptr<TSocket> socket(new TSocket("localhost", 9090));
  shared_ptr<TSocket> socket(new TSocket("10.2.152.23", 9090));
  shared_ptr<TTransport> transport(new TBufferedTransport(socket));
  shared_ptr<TProtocol> protocol(new TBinaryProtocol(transport));

  transport->open();

  MessageServiceClient client(protocol);
  Message message;
  client.latestMessage(message);

  std::cout << "message.id: " << message.id << std::endl;
  std::cout << "message.content: " << message.content << std::endl;

  transport->close();
  return 0;
}

