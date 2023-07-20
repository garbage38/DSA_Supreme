#include<bits/stdc++.h>
using namespace std;
  int main()
{
  int a[]={1,2,8,10};
  int sizea=4;
  int b[]={3,4,5,6};
  int sizeb=4;
  vector<int> ans;
  for(int i=0;i<sizea;i++){
    // int element=a[i];
    ans.push_back(a[i]);
  }
    for(int j=0;j<sizeb;j++){
       ans.push_back(b[j]);
    }
    
  
  for(auto value:ans)
    cout<<value<<" ";
  return 0;
}