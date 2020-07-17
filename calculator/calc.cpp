#include "Stack.h"
#include "MyStack.h"
#include <cmath>
#include <iostream>
#include <string> 
using namespace std; 
#include <sstream>
#include <ctgmath> 
#include <stdexcept>


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
  stringstream str_strm(tokens);
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
        if(!stack->is_empty()){
          stack->push(-1*(stack->pop()));
        } 

      }
      //int i = getline.length();
      //cout<<i<<endl;
      if(getline=="^"){
        if(!stack->is_empty()){//true will go through, else will skip to next 
          double right = stack->pop(); 
          //cout<<check<<endl;
          if(!stack->is_empty()){
            //cout<<check<<endl;
            
            stack->push(pow(stack->pop(),right));
            
          } 
        }
      }
      if(getline=="%"){
        if(!stack->is_empty()){
          double check = stack->pop(); 
          //cout<<check<<endl;
          if(!stack->is_empty()){
            //cout<<check<<endl;
            
            stack->push(fmod(stack->pop(),check));
            
          } 
        }
      }
      if(getline=="*"){
        if(!stack->is_empty()){
          double check = stack->pop(); 
          //cout<<check<<endl;
          if(!stack->is_empty()){
            //cout<<check<<endl;
            
            stack->push(check*(stack->pop()));
            
          } 
        }
      } 
      if(getline=="/"){
        if(!stack->is_empty()){
          double check = stack->pop(); 
          //careful, don't let check be 0; 
          //cout<<check<<endl;
          if(!stack->is_empty()){
            //cout<<check<<endl;
            
            stack->push((stack->pop())/check);
            
          } 
        }
      }
      if(getline=="+"){
        if(!stack->is_empty()){
          double check = stack->pop(); 
          //cout<<check<<endl;
          if(!stack->is_empty()){
            //cout<<check<<endl;
            stack->push(check+(stack->pop()));
            
          } 
        }
      }

      if(getline=="-"){
        if(!stack->is_empty()){
          double check = stack->pop(); 
          //cout<<check<<endl;
          if(!stack->is_empty()){
            //cout<<check<<endl;
            
            stack->push((stack->pop())-check);
            
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
      if(garbage == "") 
      stack->push(stod(getline));
      else{
        cout<<"Unkown Token"<<endl;
      }
      //stack->push(stod(getline));
    }
    //stod(getline);
    //stack->push(stod(getline));
  }
  //stack->push(3.0);
  //stack->push(4.0);
  if(stack->countVector()==1){
    cout<<"= "<<stack->pop()<<endl; 
  }else
  
  //cout<<"= "<<stack->pop()<<endl; 
  if(stack->countVector()>=2){
    cout<<"Too many operands"<<endl; 
  }else
  if(stack->countVector()==0){
    cout<<"No expression"<<endl; 
  }
  //cout<<tokens<<endl;
}
  //cout<<stack->contents()[0]<<endl;
  //cout<<stack->contents()[1]<<endl;
  //cout<<3<<endl;
  delete stack;
  return 0;//will return 0 whether you write it or not. inherited thing. 
}
