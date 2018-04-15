# Usage: make TARGET=<cpp-filename-without-extensions>
# For example, to compile and link main.cpp, run the following command:
# make TARGET=main
#
.PHONY: clean all

# BOOST_HOME = /mnt/nfs/gpi2/app/boost_1_66_0
# THRIFT_HOME = /mnt/nfs/gpi2/app/thrift-0.9.3
THRIFT_HOME = /usr/local

CXX = g++
CXXFLAGS = -std=c++11 -DHAVE_INTTYPES_H -DHAVE_NETINET_IN_H -Wall
INC = -I../gen-cpp -I$(THRIFT_HOME)/include
LDFLAGS = -L$(THRIFT_HOME)/lib 
LDLIBS = -lthrift

# GEN_SRC := ../gen-cpp/message_constants.cpp ../gen-cpp/MessageService.cpp ../gen-cpp/message_types.cpp
GEN_SRC := $(wildcard ../gen-cpp/*.cpp)
GEN_OBJ := $(patsubst %.cpp, %.o, $(GEN_SRC))

SRCS = $(wildcard *.cpp)

TARGETS = $(patsubst %.cpp, %.bin, $(SRCS))

%.o: %.cpp 
	$(CXX) $(CXXFLAGS) $(INC) -c $< -o $@

%.bin: %.o $(GEN_OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LDFLAGS) $(LDLIBS)
	
all: $(TARGETS)

clean:
	rm -rf $(GEN_OBJ) *.o $(TARGETS)
