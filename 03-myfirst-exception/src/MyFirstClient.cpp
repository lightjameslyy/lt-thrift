#include <iostream>

// MyFirstService header file
#include "MyFirstService.h"

#include <thrift/transport/TSocket.h>
#include <thrift/transport/TBufferTransports.h>
#include <thrift/protocol/TBinaryProtocol.h>

using namespace apache::thrift;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;
using namespace std;

using namespace myfirst;

int main(int argc, char **argv) {
    boost::shared_ptr<TSocket> socket(new TSocket("localhost", 9090));
    boost::shared_ptr<TTransport> transport(new TBufferedTransport(socket));
    boost::shared_ptr<TProtocol> protocol(new TBinaryProtocol(transport));
    MyFirstServiceClient client(protocol);
    transport->open();
    client.log("logfile.log");
    // cout << client.multiply(6,7) << endl;
    double a,b;
    cin >> a >> b;
    try {
    cout << client.divide(a, b) << endl;
    } catch (DivisionByZeroError e) {
	cout << e.what() << endl;
    }
    transport->close();
    return 0; }
