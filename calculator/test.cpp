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
  string tokens; 
  getline(cin, tokens); 
  string getline; 
  /*for(int i =0; i<getline.length(); i++){
    if(isspace(getline[i]))
    getline[i]='n';
  }
  //stack->push(cin);
  cout<<getline<<endl; */
  stringstream str_strm(tokens);
  while(str_strm>>getline){
    //stod(getline);
    //stack->push(getline)doesn't work because getline isn't changed
    stack->push(stod(getline)); 
    cout<<stack->top()<<endl; 

  }
  //stack->push(3.0);
  //stack->push(4.0);
  cout<<stack->top()<<endl; 
  delete stack;
  return 0;
}
