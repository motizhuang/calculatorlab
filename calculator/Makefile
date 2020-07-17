CXXFLAGS = -g -std=c++17 -Wall -Wextra -Werror
#what is -g fore? 
#does this change with different things like lists or vectors 
CXX      = g++

# These targets don't create any files:
.PHONY: all clean

# Magic Variables!
# https://www.gnu.org/software/make/manual/html_node/Automatic-Variables.html
#  $@ is the name of the target
#  $+ is a list of all the dependencies
#  $< is the first dependency

all: calc test
#so is this first calc then test? 

calc: calc.o MyStack.o Stack.o
	${CXX} $(CXXFLAGS) -o $@ $+

test: test.o MyStack.o Stack.o
	${CXX} $(CXXFLAGS) -o $@ $+
	#all dependnecies because need all o's? 

#$< is first dependency, which is the first cpp file? 
calc.o: calc.cpp MyStack.h Stack.h
	${CXX} $(CXXFLAGS) -c -o $@ $<
#-c makes the cpp file an object file 
test.o: test.cpp MyStack.h Stack.h
	${CXX} $(CXXFLAGS) -c -o $@ $<
	#what is LDFLAG? 

MyStack.o: MyStack.cpp MyStack.h Stack.h
	${CXX} $(CXXFLAGS) -c -o $@ $<

Stack.o: Stack.cpp Stack.h
	${CXX} $(CXXFLAGS) -c -o $@ $<


clean:
	rm -f calc test calc.o test.o MyStack.o Stack.o
#can ommit o by saying *.o 
#what's /bin/rm