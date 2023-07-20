#include<bits/stdc++.h>
using namespace std;

int solve(int divident,int divisor){
  int s =0;int e = divident;
  int ans=1;
  int mid = s+(e-s)/2;
  while(s<=e){
    if(abs(mid*divisor) == abs(divident)){
      ans= mid;
      break;
      }
    else if(abs(mid*divisor) > abs(divident))  
       e = mid-1;
    else {
       ans =mid;
       s = mid+1;
    }
     mid = s+(e-s)/2 ;
  }
  if((divident<0 && divisor<0) || (divident>0)&&(divisor>0))
           return ans;
  else{
    return -ans;
  }         
}

  int main()
{
  int divident =21;
  int divisor =-7;
  int ans = solve(divident,divisor);
  cout<<"The answer is :"<<ans<<endl;
  return 0;
}