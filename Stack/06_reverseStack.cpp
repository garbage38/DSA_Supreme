#include<bits/stdc++.h>
using namespace std;

void insertatBottam(stack<int>&s,int target){
  if(s.empty()){
    s.push(target);
    return;
  }
int topelement =s.top();
s.pop();
 //recursion call
 insertatBottam(s,target);
 //backtrack
 s.push(topelement);
}
void reverseStack(stack<int>&s){
  //base case
   if(s.empty()){
    return;
   }
  int target = s.top();
  s.pop();
 //recursion call 
  reverseStack(s);
   insertatBottam(s,target);
}
  int main()
{
  stack<int>s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);

  reverseStack(s);

  while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
  }
  return 0;
}