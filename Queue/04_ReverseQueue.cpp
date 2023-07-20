#include<bits/stdc++.h>
using namespace std;


// *************reverse using stack ***************

void reverseQueue(queue<int>&q){
    stack<int>st;
    while(!q.empty()){
      int element=q.front();
      q.pop();
      st.push(element);
    }
   while(!st.empty()){
    int item=st.top();
    st.pop();
     q.push(item);
   } 
}

//****************Reverse using recursion **************
void reverseQueueRecursion(queue<int>&q){

  //base case
   if(q.empty())
     return;
  // step 1
  int temp = q.front();
  q.pop();
  //step 2
  reverseQueueRecursion(q);
  //step 3
  q.push(temp);   
}

  int main()
{
  queue<int>q;
  q.push(3);
  q.push(6);
  q.push(9);
  q.push(2);
  q.push(8);

  //  reverseQueue(q);
  
  reverseQueueRecursion(q);

  cout<<"print the queue :"<<endl;
   while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
   }
  return 0;
}