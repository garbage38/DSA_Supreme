#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&v,int sum,int i,int &maxi){
      //base case
      if(i>=v.size()){
        //update maxi
        maxi=max(maxi,sum);
         return ;
      }
      //inclusion
      solve(v,sum+v[i],i+2,maxi);
      //exclusion
      solve(v,sum,i+1,maxi);
}
  int main()
{
  vector<int>v{2,1,4,9};
  int sum =0;
  int i=0;
  int maxi =INT_MIN;

  solve(v,sum,i,maxi);

  cout<<"The maximum sum is "<<maxi;
  return 0;
}