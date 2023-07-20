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
//********1.Reverse a singly LinkedList*************
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
//******************2.Find Middle Node of LL************
Node* getMiddleNode(Node* &head){
  Node* slow=head;
  Node* fast=head;

  while(slow != NULL && fast != NULL){
     fast = fast->next;
     if(fast != NULL){
      fast = fast->next;
      slow = slow->next;
     }
  }
  return slow;
}
//****************Reverse LL in groups of k******************
Node* reverseKnodes(Node* &head,int k){
  if(head==NULL){
    return NULL;
  }
  int len = find_length(head);
  if(k>len){
        return head;
  }
  Node* prev =NULL;
  Node* curr = head;
  Node* forward = curr->next;
  
  int count =0;
// reverse k nodes
  while(count < k && curr != NULL){
    forward = curr->next;
    curr->next =prev;
    prev = curr;
    curr = forward;
    count++;
  }
  // step 2 : connect 1st k group with rest nodes
  if(forward != NULL){
    head->next = reverseKnodes(forward,k);
  }
  //step 3 : 
  return prev;
}
//********************Loop Detection in a singly LL************
bool isLoop(Node* &head){
  Node* slow = head;
  Node* fast = head;

  while(fast != NULL){
    fast = fast->next;
    if(fast != NULL){
      slow =slow->next;
      fast=fast->next;
    }
    if(fast==slow){
      return true;
    }
  }
  return false;
}
//***************Find starting point of the loop***********
Node* startingPointLL(Node* &head){
  if(head==NULL){
    return NULL;
  }
  Node* slow = head;
  Node* fast = head;

  while(fast != NULL){
    fast = fast->next;
    if(fast != NULL){
      slow =slow->next;
      fast=fast->next;
    }
    if(fast==slow){
       slow =head;
       break;
    }
  }
  while(slow != fast){
    slow=slow->next;
    fast=fast->next;
  }
  return slow;
}
// Remove loop from the linked list
Node* removeLoop(Node* &head){
  if(head==NULL){
    return NULL;
  }
  Node* slow = head;
  Node* fast = head;

  while(fast != NULL){
    fast = fast->next;
    if(fast != NULL){
      slow =slow->next;
      fast=fast->next;
    }
    if(fast==slow){
       slow =head;
       break;
    }
  }
  if(fast==NULL){
    return NULL;
  }
  Node* prev = fast;
  while(slow != fast){
    prev = fast;
    slow=slow->next;
    fast=fast->next;
  }
  prev->next =NULL;
  return slow;
}

int main()
{
    //**********LL creation***********
     Node *first = new Node(10);
     Node *second = new Node(20);
     Node *third = new Node(30);
     Node *fourth = new Node(40);
     Node *fifth = new Node(50);
     Node *sixth = new Node(60);
     Node *seventh = new Node(70);
     Node *eighth = new Node(80);
     Node *nineth = new Node(90);

     first->next=second;
     second->next=third;
     third->next=fourth;
     fourth->next=fifth;
     fifth->next=sixth;
     sixth->next=seventh;
     seventh->next=eighth;
     eighth->next=nineth;
     nineth->next = fifth;

     cout<<"The singly linkedlist is"<<endl;
    //  print_node(first);
 
//  1. Reverse LL
    //  cout<<"\nThe reverse LL is : "<<endl;
    //  first = reverseLL(first);
    //  print_node(first);
    //  cout<<"\nThe reverse LL using recursion is : "<<endl;
    //  Node* prev =NULL;
    //  Node* curr = first;
    //  first = reverseUsingRecursion(prev,curr);
    //  print_node(first);
// 2. Find middle node of LL
    // cout<<"\nThe middle node is "<<getMiddleNode(first)->data<<endl;

//3.  Reverse LL in groups of k
  //  cout<<"\nreverse k nodes :->\n";
  // first = reverseKnodes(first,3);
  //  print_node(first);

//4. Loop detection

// if(isLoop(first)){
//   cout<<"Loop is present in the LL"<<endl;
// }
// else{
//     cout<<"Loop is not present in the LL"<<endl;
// }

// first = startingPointLL(first);
// cout<<"\nThe staring point of the Loop in LL is "<<first->data<<endl;

first = removeLoop(first);
if(isLoop(first)){
  cout<<"Loop is present in the LL"<<endl;
}
 else{
    cout<<"Loop is not present in the LL"<<endl;
}   

return 0;
}