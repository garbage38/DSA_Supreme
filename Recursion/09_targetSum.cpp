#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&v,int target){
  //base case
  if(target==0)
    return 0;
  if(target<0)  
     return INT_MAX;

    // 1st case
    int mini = INT_MAX;
    for (int i = 0; i < v.size(); i++)
    {
      /* code */
      int ans = solve(v,target-v[i]);

      if(ans != INT_MAX){
        mini = min(mini,ans+1);
      }
    }
     
  return mini;
}
  int main()
{
  vector<int>v{1,2,3};
  int target=5;

  int ans = solve(v,target);
 cout<<"The answer is "<<ans;

  return 0;
}