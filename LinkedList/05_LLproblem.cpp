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
void insert(Node** list, int item)
{
    Node *ptr, *temp;
    temp = new Node;
    temp->data = item;
    temp->next = NULL;
 
    if (*list == NULL)
        *list = temp;
    else {
        ptr = *list;
        while (ptr->next != NULL)
            ptr = ptr->next;
 
        ptr->next = temp;
    }
}
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
void addTwoLists(Node* l1, Node* l2, Node*& result) {
  Node* prev = NULL;
  int carry = 0;
  while (l1 != NULL || l2 != NULL) {
    int sum = carry + (l1 ? l1->data : 0) + (l2 ? l2->data : 0);
    carry = sum / 10;
    Node* new_node = new Node(sum % 10);
    if (prev == NULL) {
      result = new_node;
    } else {
      prev->next = new_node;
    }
    prev = new_node;
    l1 = l1 ? l1->next : NULL;
    l2 = l2 ? l2->next : NULL;
  }

  if (carry > 0) {
    Node* new_node = new Node(carry);
    prev->next = new_node;
  }
}

void printList(Node* head) {
  while (head != NULL) {
    cout << head->data << "->";
    head = head->next;
  }
  cout << endl;
}

int main() {
   Node *list1 = NULL, *list2 = NULL;
 
    // First linked list
    insert(&list1, 3);
    insert(&list1, 2);
    insert(&list1, 1);
 
    // Second linked list
    insert(&list2, 4);
    insert(&list2, 3);
    insert(&list2, 2);
    insert(&list2, 1);
 
    //reverse lists
       Node *l1 = reverseLL(list1);
       Node *l2 = reverseLL(list2);

         Node* result = NULL;
         addTwoLists(l1, l2, result);

        printList(result); 
 
    return 0;
}