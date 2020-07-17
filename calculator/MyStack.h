#ifndef MYSTACK_H
#define MYSTACK_H

#include "Stack.h"

class MyStack: public Stack {
  // TODO: Member Variables
  double* data; 
  int count; 
  int capacity; 
public:
  // TODO: Constructor & Destructor
  ~MyStack(); 
  MyStack(); 

  // Required Stack functions.
  // See Stack.h for descriptions.
  int countVector(); 
  void   clear();
  bool   is_empty() const;
  void   push(double item);
  double pop();
  double top() const;
  double* contents();

  // TODO: Add helper functions if necessary.
};

#endif
