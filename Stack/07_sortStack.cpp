#include<bits/stdc++.h>
using namespace std;
void insertsorted(stack<int>&s,int target){
      if(s.empty()){
        s.push(target);
        return;
      }
      if(s.top()>=target){
        s.push(target);
        return;
      }
      int topElement = s.top();
      s.pop();

      insertsorted(s,target);
      //Backtrack
      s.push(topElement);

}
void sortstack(stack<int>&s){
  if(s.empty()){
    return;
  }
  int topElement = s.top();
  s.pop();
  sortstack(s);
  insertsorted(s,topElement);
}
  int main()
{
  stack<int>st;
  st.push(7);
  st.push(11);
  st.push(3);
  st.push(5);
  st.push(9);
  
  sortstack(st);

  while (!st.empty())
  {
    /* code */
    cout<<st.top()<<" ";
    st.pop();
  }
  
  return 0;
}