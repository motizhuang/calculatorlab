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
        throw std::underflow_error("Unknown token.");
      }
      void checkzero(double check){
              if(check==0)
              throw std::underflow_error("Unknown token.");
            }
// TODO: Calculator helper fuctions, if necessary.

int main() {
  // TODO: Implement a calculator!

  MyStack* stack = new MyStack();
  //string mack = "man"; 
  //cout<<mack.length()<<endl; 
  // TODO: Replace this with something useful!
  //std::cout << "This program doesn't do anything yet...\n";
  string tokens; 
  while(getline(cin,tokens)){//infinite loop, 
  //string tokens; 
  //getline(cin, tokens);
  /*if(tokens==""){
    cout<<"No expression"<<endl; 
  }*/
  string getline; 
  //string garbage; 
  stringstream str_strm(tokens);
  //double result;
  while(str_strm>>getline){
    //int z = getline.length();
    /*std::stringstream ts(getline);
    ts >> num;
    ts.clear();
    std::string garbage;
    std::getline(ts, garbage);
    if(garbage == “”) {…}*/

    /*for(int i =0; i<z;i++){
      if(getline[i]!='0'||getline[i]!='1'||getline[i]!='2'||getline[i]!=3||getline[i]!=4||getline[i]!=5||getline[i]!=6||getline[i]!=7||getline[i]!=8||getline[i]!=9||getline!="~"||getline!="*"||getline!="/"||getline!="+"||getline!="-"||getline!="^"||getline!="%")
      cout<<"Unknown Token"<<endl; 
    }*/
     
    if(getline=="~"||getline=="*"||getline=="/"||getline=="+"||getline=="-"||getline=="^"||getline=="%"){
      if(getline=="~"){
        try{
          stack->push(-1*(stack->pop()));
        } 
        catch(const std::underflow_error&) {
    std::cout << "Not enough operands.\n";

      }
      }
      //int i = getline.length();
      //cout<<i<<endl;
      else if(getline=="^"){
        if(!stack->is_empty()){//true will go through, else will skip to next 
          double right = stack->pop(); 

          //if(!stack->is_empty())
          try{
            stack->push(pow(stack->pop(),right));
          }
          catch(const std::underflow_error&) {
    std::cout << "Not enough operands.\n";
        }
      }
      }
      else if(getline=="%"){
        if(!stack->is_empty()){
          double check = stack->pop(); 
          //cout<<check<<endl;
         try{
            //cout<<check<<endl;
            try{
              checkzero(check); 
            }
            catch(const std::underflow_error&){
              cout<<"Division by zero."<<endl; 
            }
            stack->push(fmod(stack->pop(),check));
            
          } 
          catch(const std::underflow_error&) {
    std::cout << "Not enough operands.\n";
        }
      }
      }
      else if(getline=="*"){
        if(!stack->is_empty()){
          double check = stack->pop(); 
          //cout<<check<<endl;
          try{
            //cout<<check<<endl;
            
            stack->push(check*(stack->pop()));
            
          } 
          catch(const std::underflow_error&) {
    std::cout << "Not enough operands.\n";
        }
      } 
      }
      else if(getline=="/"){
        if(!stack->is_empty()){
          double check = stack->pop(); 
          //careful, don't let check be 0; 
          //cout<<check<<endl;
          try{
            //cout<<check<<endl;
            
            try{
              checkzero(check); 
            }
            catch(const std::underflow_error&){
              cout<<"Division by zero."<<endl; 
            }
            stack->push((stack->pop())/check);
            
          } 
          catch(const std::underflow_error&) {
    std::cout << "Not enough operands.\n";
        }
      }
      }
      else if(getline=="+"){
        if(!stack->is_empty()){
          double check = stack->pop(); 
          //cout<<check<<endl;
          /*if(!stack->is_empty()){
            //cout<<check<<endl;
            stack->push(check+(stack->pop()));
            
          }*/ 
          try{
            stack->push(check+(stack->pop()));
            //result = stack->pop(); 
          }
          catch(const std::underflow_error&) {
    std::cout << "Not enough operands.\n";
    //stack->push(check);
    //break; 
  }
          /*catch(const std::exception& e) {
    std::cout << "Caught an exception.  It says: ";
    std::cout << e.what() << std::endl;
  }*/

        }
      }

      else if(getline=="-"){
        if(!stack->is_empty()){
          double check = stack->pop(); 
          //cout<<check<<endl;
          try{
            stack->push((stack->pop())-check);
            //result = stack->top(); 
          }
          catch(const std::underflow_error&) {
    std::cout << "Not enough operands.\n";
            
          } 
        }
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
      try{
        push(garbage);
        stack->push(stod(getline));
      }
      catch(const std::underflow_error&){
        cout<<"Unknown token."<<endl; 
      }
      /*if(garbage == "") 
      stack->push(stod(getline));
      else{
        cout<<"Unknown token."<<endl;
        //break; 
      }*/
      //stack->push(stod(getline));
    }
    //stod(getline);
    //stack->push(stod(getline));
  }
  //stack->push(3.0);
  //stack->push(4.0);
  /*if(stack->countVector()==1){
    cout<<"= "<<stack->pop()<<endl; 
  }else*/
    /*if(garbage!=""){
      cout<<"Unknown Token"<<endl;
    }*/
    if(stack->countVector()==1){
    cout<<"= "<<stack->pop()<<endl; 
  }else
  //cout<<"= "<<stack->pop()<<endl; 
  if(stack->countVector()>=2){
    cout<<"Too many operands."<<endl; 
    while(stack->countVector()>0){
      stack->pop(); 
    }
  }else
  if(tokens==""){
    cout<<"No expression."<<endl; 
  }
  //cout<<tokens<<endl;
  }
  //cout<<stack->contents()[0]<<endl;
  //cout<<stack->contents()[1]<<endl;
  //cout<<3<<endl;
  delete stack;
  return 0;//will return 0 whether you write it or not. inherited thing. 
}
