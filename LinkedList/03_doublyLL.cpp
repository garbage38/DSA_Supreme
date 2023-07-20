#include<bits/stdc++.h>
using namespace std;
class Node {
     public:
        int data;
        Node* prev;
        Node* next;
     //constructor
     Node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
      }  
      Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
      }
      //destructor
     ~Node(){
        cout<<"Node with value "<<this->data<<" is deleted"<<endl;
     } 
};
void print(Node* &head){
    Node* temp=head;
    while (temp !=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int findLength(Node* head){
    int len=0;
    Node* temp=head;
    while (temp != NULL)
    {
        /* code */ len++;
        temp=temp->next;
    }
    return len;
}
//*********************Insert***********************
// Insert at head:->
void insertAtHead(Node* &head,Node* &tail,int data){
      if(head==NULL){
         Node* newNode = new Node(data);
         head = newNode;
         tail=newNode;
         return;
      }
      //step 1
      Node* newNode=new Node(data);
      //step 2
      newNode->next = head;
      //step 3
      head->prev=newNode;
      //step 4
      head = newNode;
} 
//insert at tail :->
void insertAtTail(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=NULL;
        tail=NULL;
        return;
    }
    //step 1
    Node* newNode=new Node(data);
    //step 2
    tail->next=newNode;
    //step3
    newNode->prev=newNode;
    //step 4
    tail=newNode;
}
// insert at any position:->
void insertAtPosition(Node* &head,Node* &tail,int data,int pos){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=NULL;
        tail=NULL;
        return;
    }
    if(pos==1){
        insertAtHead(head,tail,data);
        return;
    }
    int len = findLength(head);
    if(pos >= len){
        insertAtTail(head,tail,data);
        return;
    }
    //insert at middle 
    //step 1 find prevNode & curr
    int i=1;
    Node* prevNode = head;
    while(i<pos-1){
        prevNode=prevNode->next;
        i++;
    }
    Node* curr = prevNode->next;
    //step 2 : create newNode
    Node* newNode = new Node(data);
    //step 3
    prevNode->next= newNode;
    newNode->prev= prevNode;
    curr->prev=newNode;
    newNode->next = curr;

}
//***************Delete node***************
void deleteAtPosition(Node* &head,Node* &tail,int pos){
    //if LL is empty
    if(head==NULL){
        cout<<"Linked list is empty"<<endl;
        return;
    }
    //single node doublyLL
    if(head->next==NULL){
        Node* temp=head;
        head=NULL;
        tail= NULL;
        delete temp;
        return;
    }
    //delete first node
    if(pos==1){
        Node* temp=head;
        head =head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        return;
    }
    //delete last node
    int len = findLength(head);
    if(pos==len){
        Node *temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        temp->prev=NULL;
        delete temp;
        return;
    }
    if(pos>len){
        cout<<"Enter a valid position"<<endl;
    }
    //delete at middle node position
    //step 1 find left curr and right node position
    Node* left=head; int i=1;
    while(i<pos-1){
        left=left->next;
        i++;
    }
    Node* curr= left->next;
    Node* right = curr->next;
    //step 2
    left->next=right;
    right->prev=left;
    //step 3
    curr->next=NULL;
    curr->prev=NULL;

    delete curr;
}
int main()
{
    Node* first= new Node(10);
    Node* second= new Node(20);
    Node* third= new Node(30);
    
    Node* head=first;
    Node* tail = third;

    first->next=second;
    second->prev=first;

    second->next=third;
    third->prev=second;

    print(first);
    cout<<"Insert at head 0 "<<endl;
    insertAtHead(head,tail,0);
    print(head);

     cout<<"Insert at tail 50"<<endl;
    insertAtTail(head,tail,50);
    print(head);

    cout<<"Insert at given position"<<endl;
    insertAtPosition(head,tail,-36,2);
    print(head);

   cout<<"Delete at given position"<<endl;
    deleteAtPosition(head,tail,2);
    print(head);

return 0;
}

