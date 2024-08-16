#include <iostream>
using namespace std;

class Node{
  public:
    int data;
    Node *next;
    
    Node(int value){
      data = value;
      next = NULL;
    }
 
};

class Stack{
    public:
    Node *top;
    int size;
    
    Stack(){
      top = NULL;
      size = 0;
    }
    
    void push(int value){
      
      Node *temp = new Node(value);
      
      if(temp == NULL){
        cout<<"stack overflow"<<endl;
      }
      else{
        temp->next= top;
        top = temp;
        size++;
        cout<<top->data << " is pushed to the stack"<<endl;
      }
    }
    
    void pop(){
      if(top == NULL){
        cout<<"stack underflow"<<endl;
      }
      Node *temp = top;
      top = top->next;
      cout<<temp->data <<" is poped from stack"<<endl;
      delete temp;
      size--;
    }
    
    void peek(){
      cout<<top->data<<endl;
    }
    
    void isEmpty(){
      if(top == NULL){
        cout<<"stack is empty"<<endl;
      }
      else{
        cout<<"stack is not empty"<<endl;
      }
    }
    
    void isSize(){
      cout<<"size is "<<size<<endl;
    }
  
  
};


int main() 
{
   Stack s;
   s.push(10);
   s.push(11);
   s.push(12);
   s.push(13);
   s.pop();
   s.peek();
   s.isSize();
   s.isEmpty();
   
    return 0;
}
