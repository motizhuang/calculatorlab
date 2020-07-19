#include "MyStack.h"
#include <stdexcept>
using namespace std; 

// TODO: Implement MyStack member functions here.
//calc suffers if there are errors here 

MyStack::~MyStack(){
    //if(data!=nullptr)
    delete [] data; //big mistake that passes, how to catch this? makes a huge difference. 
}
  MyStack::MyStack(){
    data = new double[capacity];
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
      int j = count; 
      for(int i =0; i<j; i++){
          count --; 
      } 
  }
  bool   MyStack::is_empty() const{
      return count ==0;

  }
  void   MyStack::push(double item){
      /*if(data == nullptr){
          data = new double[capacity];
          data[0]=item; 
      }*/
      if(count==capacity){
          double* newdata = new double[capacity*2];
          capacity = capacity*2;//how to catch this 
          for(int i =0; i<count; i++){
              newdata[i]=data[i]; 
          }
          newdata[count]=item; 
          delete [] data; 
          data = newdata;  
      }
      else{
          data[count]=item; 
      }
      
      count++; 
  }
  double MyStack::pop(){
      if(count==0){
        //delete [] data;
        throw std::underflow_error("Invalid index.");
        delete [] data;
      }
      double result = data[count-1];
      //data[count-1]=0;
      count--; 
      return result; 

  }
  double MyStack::top() const{
      if(count==0){
          
          throw std::out_of_range("Invalid index."); 
      }
      return data[count-1];

  }

