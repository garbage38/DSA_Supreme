#include<bits/stdc++.h>
using namespace std;

class Node{
     public :
      int data;
      Node* next;

      Node(){
        this->data = 0;
        this->next = NULL;
      }
      Node(int data){
        this->data = data;
        this->next = NULL;
      }
      ~Node(){
        cout<<"Deleted Node value"<<this->data<<endl;
      }
};
void print(Node* head){
  Node* temp = head;
  while (temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}
int find_length(Node* &head){
  Node* temp =head;
  int len=0;
  while (temp!=NULL)
  {
    len++;
    temp=temp->next;
  }
  return len;

}
//******Insert at head**************
void insertAtHead(Node* &head,Node* &tail,int data){
//If head pointer is NULL
if(head==NULL){
   Node* newNode = new Node(data);
   head=newNode;
   tail=newNode;
   return;
}
// Insert at head
  //step 1
  Node* newNode = new Node(data);
  //step 2
  newNode->next=head;
  //step 3
  head=newNode;
}
//*******Insert at the tail*********
void insertAtTail(Node* &head,Node* &tail,int data){
//If head Pointer is NUll
if(head==NULL){
   Node* newNode = new Node(data);
   head=newNode;
   tail=newNode;
   return;
}
// Insert at the tail
  //step1
  Node* newNode=new Node(data);
  //step2
      tail->next=newNode;
  //step 3
  tail=newNode;
}
//******Insert at any position********
void insertAtPosition(Node* &head,Node* &tail,int pos,int data){
  if(head==NULL){
    Node* newNode=new Node(data);
    head=newNode;
    tail=newNode;
    return;
  }
  //For iserting pos=0
  if(pos==0){
    insertAtHead(head,tail,data);
    return;
  }
  int len = find_length(head);
  if(pos >=len){
    insertAtTail(head,tail,data);
    return;
  }
  //Inset at middile
  //step 1 : find prev and current pointer
  int i=1;
  Node* prev =head;
  while (i<pos)
  {
    i++;
    prev=prev->next;
  }
  Node* curr = prev->next;

  //step 2 : create a new node
    Node * newNode=new Node(data);

  //step 3
  newNode->next = curr;
  //step 4
  prev->next = newNode;  
  


}
void deleteNode(int pos,Node* head,Node* tail){
      if(head==NULL){
        cout<<"cannot delete,LL is empty";
      }
      //deleting first node
      if(pos==1){
        Node* temp= head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
      }
      //deleting last node
      int len=find_length(head);
      if(pos==len){
        int i=1;
        //find prev
        Node* prev=head;
        while (i<pos-1)
        {
          prev=prev->next;
          i++;
        }
        //step 2 
        prev->next=NULL;
        //step 3
        Node* temp=tail;
        //step 4
        tail=prev;
        //step 5
        delete temp;
        return ;
        
      }

      //deleting middle element
      //step 1 : find prev and curr
      int i=1;
      Node* prev=head;
      while (i<pos-1)
      {
        prev=prev->next;
        i++;
      }
      Node* curr=prev->next;
      //step 2 
      prev->next=curr->next;
      //step 3
      curr->next=NULL;
      //step 4
      delete curr;
      


}

int main()
{
  //  Node* head=new Node(10);
   Node* head=NULL;
   Node* tail=NULL;
   
   insertAtHead(head,tail,50);
   insertAtHead(head,tail,60);
   insertAtHead(head,tail,70);

  //  print(head);
  //  cout<<endl;
  //  Node* tail=NULL;
   insertAtTail(head,tail,20);
   insertAtTail(head,tail,30);
   insertAtTail(head,tail,40);
   print(head);
 
 cout<<endl;
 insertAtPosition(head,tail,3,99);
 print(head);
cout<<endl;
 deleteNode(3,head,tail);
 print(head);

return 0;
}