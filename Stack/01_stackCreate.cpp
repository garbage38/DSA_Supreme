//create stack using concept of class
#include<bits/stdc++.h>
using namespace std;
class Stack{
   public:
   //properties
    int *arr;
    int size;
    int top;
    //constructor
    Stack(int size){
        arr=new int[size];
        this->size=size;
        top=-1;

    }
    //Functions
      void push(int data){
        if(size-top>1){
          top++;
          arr[top]=data;
        }
        else{
          cout<<"Stack is overflow";
          return;
        }
      }
      void pop(){
        if(top==-1){
          cout<<"stack is underflow";
        }
        else{
          top--;
        }
      } 
      int getTop(){
        if(top != -1) return arr[top];
      }
      int getsize(){
        if(top != -1) return top+1;
      }
    bool isEmpty(){
     return top==-1;
    }  
};
  int main()
{
  Stack s(10);

  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);

  while(!s.isEmpty()){
        cout<<s.getTop()<<" ";
        s.pop();
  }
  return 0;
}

