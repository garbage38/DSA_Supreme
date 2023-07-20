#include<bits/stdc++.h>
using namespace std;

void reverseK(queue<int>&q,int k){
  
  int n=q.size();
  int cnt=0;
  stack<int>st;
  
    if(k==0 || k >n)
      return;
    
  while (!q.empty())
  {
    /* code */
    int temp = q.front();
    q.pop();
    st.push(temp);

    cnt++;
    if(cnt==k){
       break;
    }
  }

  while (!st.empty())
  {
    /* code */
     int temp = st.top();
     st.pop();
     q.push(temp);
  }

  // n-k elements after doing  pop then push it into the queue
   cnt=0;
    while (!q.empty() && (n-k) != 0)
  {
    /* code */
    int temp = q.front();
    q.pop();
    q.push(temp);
    cnt++;
    if(cnt==n-k){
       break;
    }
  }
  

}
  int main()
{
    queue<int>q;
  q.push(3);
  q.push(6);
  q.push(9);
  q.push(2);
  q.push(8);

  reverseK(q,5);
  cout<<"print the reverse k element queue :"<<endl;
   while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
   }
  return 0;
}