#include <iostream>
using namespace std;

class CirQueue{
        public:
        int size;
        int *arr;
        int front;
        int rear;

        CirQueue(int size) {
                this->size = size;
                arr = new int[size];
                front = -1;
                rear = -1;
        }

        void push(int data) {
                //Queue Full

                //single element case - > first element

                //circular nature

                //normal flow
                //TODO: add one more condition in the QUEUE FULL if block
                if((front == 0 && rear == size-1)) {
                        cout << "Q is fulll, cannot insert" << endl;
                }
                else if(front == -1) {
                        front = rear = 0;
                        arr[rear] = data;
                }
                else if(rear == size-1 && front != 0 ) {
                        rear = 0;
                        arr[rear] = data;
                }
                else{
                        rear++;
                        arr[rear]= data;
                } 
        }

        void pop() {
                //empty check
                //single element
                //circular nature
                //normal flow
                if(front == -1) {
                        cout << "Q is empty , cannot pop" << endl;
                }
                else if (front == rear) {
                        arr[front] = -1;
                        front = -1;
                        rear = -1;  
                }
                else if(front == size-1) {
                        front = 0;
                }
                else {
                        front++;
                }
        }

 int getSize(){
   return rear-front;
 }
   void print(){
    for(int i=0;i<=getSize();i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
   }
};

  int main()
{
  CirQueue cq(10);
  cq.push(10);
  cq.push(15);
  cq.push(90);
  cq.push(100);

  cout<<"print the queue : " ;
  cq.print();
  return 0;
}