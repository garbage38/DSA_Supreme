#include<bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int>&v,int s,int e,int target){
  //  if
  int mid = s+(e-s)/2;
  //base case
     if(s>e)
     return false;
     if(v[mid]==target)
       return true;

  //other recursive calls
   else if( v[mid] >= target)  {
       return binarySearch(v,s,mid-1,target);
   }  
   else{
        return binarySearch(v,mid+1,e,target);
   }


}
  int main()
{
  vector<int>v{2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
  int n =v.size();
  int target = 99;
  int s =0;
  int e =n-1;
  // int mid = s+(e-s)/2;
  bool ans = binarySearch(v,s,e,target);

  if(ans){
    cout<<"element is found through BS";
  }
  else{
    cout<<"element is not found through BS";
  }
  return 0;
}