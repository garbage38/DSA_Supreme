#include<bits/stdc++.h>
using namespace std;

void printMiddleElement(stack<int>&s,int &total_size){
   //Base condition
    if(total_size/2+1 == s.size()){
      cout<<"Middle Element is "<<s.top()<<endl;
    }
    int temp = s.top();
    s.pop();
    //recursion
    printMiddleElement(s,total_size);
    //backtracking
    s.push(temp);

}
void printstack(stack<int>&s,int &total_size){
   while (!s.empty())
   {
    /* code */
    cout<<s.top()<<" ";
    s.pop();
   }
   
}
  int main()
{
  stack<int>s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  s.push(60);
  s.push(70);

   int total_size=s.size();
  printMiddleElement(s,total_size);
  printstack(s,total_size);
  return 0;
}