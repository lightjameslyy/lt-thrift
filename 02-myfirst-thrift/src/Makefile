# Usage: make TARGET=<cpp-filename-without-extensions>
# For example, to compile and link main.cpp, run the following command:
# make TARGET=main
#
.PHONY: clean all

BOOST_HOME = /mnt/nfs/gpi2/app/boost_1_66_0
THRIFT_HOME = /mnt/nfs/gpi2/app/thrift-0.9.3

CXX = g++
CXXFLAGS = -std=c++11 
INC = -I../gen-cpp -I$(BOOST_HOME)/include -I$(THRIFT_HOME)/include
LDFLAGS = -L$(BOOST_HOME)/lib -L$(THRIFT_HOME)/lib 
LDLIBS = -lthrift

GEN_SRC := ../gen-cpp/myfirst_constants.cpp ../gen-cpp/MyFirstService.cpp ../gen-cpp/myfirst_types.cpp
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
