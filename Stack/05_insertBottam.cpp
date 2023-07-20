#include<bits/stdc++.h>
using namespace std;

void solve(stack<int>&s,int target){

  //Base case
  if(s.empty()){
    s.push(target);
    return;
  }
  int temp = s.top();
  s.pop();
  //recursion call
  solve(s,target);
  //backtrack
  s.push(temp);
}
void insertatBottam(stack<int>&s){
  if(s.empty()){
    return;
  }
int target =s.top();
s.pop();
solve(s,target);

}
  int main()
{
  stack<int>s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);

  insertatBottam(s);
  while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
  }
  return 0;
}