#include<bits/stdc++.h>
using namespace std;

void interleaveQueue(queue<int>&q){

  int n=q.size();
  int k = n/2;
  int cnt=0;
  queue<int>q2; 
   
   if(q.empty())
      return;
  
  //step 1 take first half of queue
   while (!q.empty())
   {
    /* code */
    int temp = q.front();
    q.pop();

    q2.push(temp);
    cnt++;
     if(cnt==k){
      break;
     }
   }
  //interleaving situation handle
  while (!q.empty() && !q2.empty())
  {
    /* code */
    int first = q2.front();
    q2.pop();
    q.push(first);

    int second = q.front();
    q.pop();
    q.push(second);

  }
   //while queue is odd length then q is also odd and there are one extara element there
   if(n&1){
    int element=q.front();
    q.pop();
    q.push(element);
   }
   

}
  int main()
{
  queue<int>q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.push(6);
  q.push(7);
  q.push(8);
  q.push(9);

  interleaveQueue(q);
  cout<<"print the inter-leave queue :"<<endl;
   while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
   }
  return 0;
}