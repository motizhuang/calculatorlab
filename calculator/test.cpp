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
  /*double num = 3.0; 
  
  double* number = new double[3]; 
  number[0]=num; 
  double* t = number; 
  //delete t; 
  cout<<"the number is: "<<number[0]<<endl;*/

  // TODO: Replace this with something useful!
  //std::cout << "This program doesn't do anything yet...\n";
  stack->push(1);
  stack->pop();
  stack->pop();
  cout<<stack->countVector()<<endl;
  stack->push(2);
  stack->push(3);
  stack->push(3);
  stack->push(3);
  stack->push(3);
  //cout<<stack->countVector()<<endl;
  stack->push(3);
  stack->push(3);
  stack->push(3);
  stack->push(3);
  stack->push(3);
  cout<<stack->countVector()<<endl;
  stack->clear();
  cout<<stack->countVector()<<endl;
  if(stack->is_empty())
  cout<<"correct"<<endl; 
  delete stack;
  return 0;
}
