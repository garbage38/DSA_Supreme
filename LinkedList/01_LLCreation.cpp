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
};
void print_node(Node* head){
       Node* temp = head;
       while (temp !=NULL)
       {
        cout<<temp->data<<"->";
        temp = temp->next;
       }     
}
//********Reverse a singly LinkedList*************
Node* reverseLL(Node* &head){
  Node* prev = NULL;
  Node* curr = head;

  while(curr != NULL){
    Node* temp = curr->next;
    curr->next=prev;
    prev=curr;
    curr = temp;
  }
  return prev;
}
//** reverse using recursion***
Node* reverseUsingRecursion(Node* prev,Node*curr){
   //base case
    if(curr==NULL)
      return prev;
  //Handale one case
    Node* temp = curr->next;
    curr->next=prev;
    prev=curr;
    curr = temp; 
  // call recursion function
  reverseUsingRecursion(prev,curr);

}

int main()
{
    //**********LL creation***********
     Node *first = new Node(10);
     Node *second = new Node(20);
     Node *third = new Node(30);
     Node *fourth = new Node(40);
     Node *fifth = new Node(50);

     first->next=second;
     second->next=third;
     third->next=fourth;
     fourth->next=fifth;
     fifth->next=NULL;

     cout<<"The singly linkedlist is"<<endl;
     print_node(first);
     cout<<"\nThe reverse LL is : "<<endl;
    //  first = reverseLL(first);
    //  print_node(first);
     cout<<"\nThe reverse LL using recursion is : "<<endl;
     Node* prev =NULL;
     Node* curr = first;
     first = reverseUsingRecursion(prev,curr);
     print_node(first);

return 0;
}