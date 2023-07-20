#include<bits/stdc++.h>
using namespace std;

int climbStair(int n){
   //Base case 
   if(n==0 || n==1)
      return 1;
   //recurrence relation
   int ans = climbStair(n-1)+climbStair(n-2);

   return ans;   
}
  int main()
{
  int n;
  cout<<"Enter no of stairs :"<<endl;
  cin>>n;
  int ans = climbStair(n);
  cout<<"The possible ways to reach "<<n<<"th stair is :"<<ans;
  return 0;
}