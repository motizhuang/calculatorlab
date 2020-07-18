#include "MyStack.h"
#include <cmath>
#include <iostream>
#include <string> 
using namespace std; 
#include <sstream>

// Use this file to test your MyStack class!
// This file won't be graded - do whatever you want.

int main() {
  MyStack* stack = new MyStack();

  // TODO: Replace this with something useful!
  //std::cout << "This program doesn't do anything yet...\n";
  stack->push(1); 
  stack->pop();
  stack->pop();
  stack->push(1); 
  stack->push(1); 
  stack->push(1); 
  stack->push(1); 
  stack->push(1);
  stack->pop();
  cout<<stack->top()<<endl; 
  delete stack;
  return 0;
}
