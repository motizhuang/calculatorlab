#include "MyStack.h"
#include <stdexcept>
using namespace std; 

// TODO: Implement MyStack member functions here.
//calc suffers if there are errors here 

MyStack::~MyStack(){
    delete data; 
}
  MyStack::MyStack(){
    data = nullptr; 
    count =0; 
    capacity = 4;
    //int start; using mod sometimes. points to the first element, not necessarily first space
  }
  

  // Required Stack functions.
  // See Stack.h for descriptions.
  int MyStack::countVector(){
      return count; 
  }
  double* MyStack::contents(){
      return data;
  }
  void   MyStack::clear(){
      for(int i =0; i<count; i++)
      data[i]=0; 
  }
  bool   MyStack::is_empty() const{
      return count ==0;

  }
  void   MyStack::push(double item){
      if(data == nullptr){
          data = new double[capacity];
          data[0]=item; 
      }
      if(count==capacity){
          double* newdata = new double[capacity*2];
          for(int i =0; i<count; i++){
              newdata[i]=data[i]; 
          }
          newdata[count]=item; 
          delete data; 
          data = newdata; 
      }
      else{
          data[count]=item; 
      }
      
      count++; 
  }
  double MyStack::pop(){
      if(data==nullptr||count==0){
          throw std::out_of_range("Invalid index.");
      }
      double result = data[count-1];
      //data[count-1]=0;
      count--; 
      return result; 

  }
  double MyStack::top() const{
      if(data==nullptr){
          throw std::out_of_range("Invalid index."); 
      }
      return data[count-1];

  }

