#include<bits/stdc++.h>
using namespace std;

bool checkSorted(vector<int>&v,int n,int i){
  //base case
       if(i==n-1)
          return true;
     // 1 case khud sambhalo
     if(v[i+1] <= v[i])
        return false;

     //Baki recursion sambhal lega

     return checkSorted(v,n,i+1);        
}
  int main()
{
  vector<int>v{2, 8, 1, 3, 6, 7, 5, 4};
  int n =v.size();
  int i=0;

  bool ans = checkSorted(v,n,i);

  if(ans){
    cout<<"Vector is sorted";
  }
  else{
    cout<<"Vector is not sorted";
  }
  return 0;
}