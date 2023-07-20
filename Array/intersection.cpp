#include<bits/stdc++.h>
using namespace std;
  int main()
{
  int a[]={1,2,8,10,5,3};
  int sizea=6;
  int b[]={3,4,5,6};
  int sizeb=4;
  vector<int> ans;
  for(int i=0;i<sizea;i++){
    int element=a[i];
    for(int j=0;j<sizeb;j++){
      if(element==b[j]){
         b[j] == INT_MIN;
         ans.push_back(b[j]);
      }
    }
  } 
  
  for(auto value:ans)
    cout<<value<<" ";
  return 0;
}