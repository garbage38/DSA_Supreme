//Implementation of queue using vector by creating class
#include<bits/stdc++.h>
using namespace std;

class Queue{
      
      public:
        int *arr;
        int size;
        int front;
        int rear;
//constructor
        Queue(int size){
            this->size=size;
            arr = new int[size];
            front=0;
            rear=0;
        }
  void push(int data){
    if(rear==size){
      cout<<"Queue is full";
    }
    else{
      arr[rear]=data;
      rear++;
    }
  }      
  void pop(){
    if(rear==front ){
      cout<<"Queue is empty";
    }
    else{
      arr[front]=-1;
      front++;
      if(front==rear){
        front = rear=0;
      }
    }
  }
  int getFront(){
    if(front ==rear)
      cout<<"Queue is empty";
  
  else{
    return arr[front];
    }
  }
  bool isEmpty() {
    if(front == rear)
      return true;
    else{
      return false;
    }  
  }
  int getSize(){
    return rear-front;
  }

};

  int main()
{
  Queue q(10);
  q.push(2);
  q.push(5);
  q.push(7);
  q.push(11);

  cout<<"Queue size is :"<< q.getSize()<<endl;

   q.pop();
    cout<<"Queue size is :"<< q.getSize()<<endl;

      cout<<"Queue front element is :"<< q.getFront()<<endl;

    if(q.isEmpty()){
        cout<<"Queue is empty ";
    } 
    else{
       cout<<"Queue is not empty ";
    }
  return 0;
}