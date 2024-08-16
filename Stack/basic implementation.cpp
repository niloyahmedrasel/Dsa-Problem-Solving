#include <iostream>
using namespace std;

class Stack{
  public:
  int *arr;
  int size;
  int top;
  
  Stack(int value){
    size = value;
    top = -1;
    arr = new int[value];
  }
  
  void push(int size){
    
    if(size == top+1){
      cout<<"stack overflow"<<endl;
    }
    else{
      top++;
      arr[top] = size;
      
      cout<<size <<" is pushed to stack"<<endl;
    }
  }
  
  
  void pop(){
    if(top == -1){
      cout<<"stack underflow"<<endl;
    }
    else{
      top--;
      cout<< arr[top+1] <<" poped form stack"<<endl;
    }
  }
  
  int peek(){
    if(top == -1){
      cout<<"stack is empty"<<endl;
      return 0;
    }
    else{
      cout<<arr[top]<<" is peek"<<endl;
    }
  }
  
  bool isEmpty(){
    if(top == -1){
      cout<<"stack is empty ----"<<endl;
    }
    else{
      cout<<"stack is not empty"<<endl;
    }
  }
  void isSize(){
    cout<<top+1<<endl;
  }
  
};


int main() 
{
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    s.peek();
    s.pop();
    s.pop();
    s.peek();
    s.push(4);
    s.peek();
    s.isEmpty();
    s.pop();
    s.isEmpty();
    s.isSize();
    s.push(1);
    s.push(2);
    s.push(3);
    s.isSize();
   
    return 0;
}
