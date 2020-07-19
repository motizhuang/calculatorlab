#include "Stack.h"
#include "MyStack.h"
#include <cmath>
#include <iostream>
#include <string> 
using namespace std; 
#include <sstream>
#include <ctgmath> 
#include <stdexcept>

void push(string name){
        if(name!="")
        throw std::overflow_error("Unknown token.");
      }
      void checkzero(double check){
              if(check==0)
              throw std::range_error("Unknown token.");
            }
void checkmorethantwo(int i){
  if(i>=2)
    throw runtime_error("Too many operands.");
}
void checkempty(int i){
  if(i==0)
  throw length_error("No expression.");
}
// TODO: Calculator helper fuctions, if necessary.
double process(string tokens){
  MyStack* stack = new MyStack(); 
  double result=0; 
  string getline=""; 
  stringstream str_strm(tokens);
  while(str_strm>>getline){
    if(getline=="~"||getline=="*"||getline=="/"||getline=="+"||getline=="-"||getline=="^"||getline=="%"){
      if(getline=="~"){
          stack->push(-1*(stack->pop()));
      }
      else if(getline=="^"){
 
          double right = stack->pop(); 
        
            stack->push(pow(stack->pop(),right));
          
      }
      else if(getline=="%"){
          double check = stack->pop(); 
          stack->push(fmod(stack->pop(),check)); 
            checkzero(check); 
      }
      else if(getline=="*"){
          double check = stack->pop(); 
          
            stack->push(check*(stack->pop()));
      }
      else if(getline=="/"){
          double check = stack->pop(); 
          //careful, don't let check be 0; 
          //cout<<check<<endl;
          stack->push((stack->pop())/check);
          checkzero(check); 
      }
      else if(getline=="+"){

          double check = stack->pop();
            stack->push(check+(stack->pop()));

      }

      else if(getline=="-"){
          double check = stack->pop(); 
          stack->push((stack->pop())-check);

      }
    }
    else{
      //cout<<getline<<endl; 
      double num; 
      std::stringstream ts(getline);
      ts >> num;//num is a variable 
      ts.clear();
      std::string garbage;
      std::getline(ts, garbage);
      /*void push(string){
        if(string!="")
        throw std::underflow_error("Unknown token.");
      }*/
        push(garbage);
        stack->push(stod(getline));
      
  }
}
int countVector = stack->countVector();
if(countVector>0&&<2)
result = stack->top(); 
delete stack; //be careful with throw, if below the checks below this, won't delete because will just throw 
checkmorethantwo(countVector);
checkempty(countVector);
return result; 
}

int main() {
  // TODO: Implement a calculator!

  //MyStack* stack = new MyStack();
 
  string tokens; 
  while(getline(cin,tokens)){
      try{
          double result = process(tokens);
          cout<<"= "<<result<<endl; 
      }
      catch(const std::overflow_error&){
        cout<<"Unknown token."<<endl; 
      }
      catch(const std::underflow_error&) {
    std::cout << "Not enough operands.\n";

      }
      catch(const std::range_error&) {
    std::cout << "Division by zero.\n";

      }
      catch(const std::runtime_error&) {
    std::cout << "Too many operands.\n";

      }
      catch(const std::length_error&) {
    std::cout << "No expression.\n";

      }
  }
  //delete stack;
  return 0;//will return 0 whether you write it or not. inherited thing. 
}

