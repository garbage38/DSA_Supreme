#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
 int lastOccurrence(vector<int>v,int target){
    int start =0;int end = v.size()-1;
    int mid = start+(end-start)/2;
     int ans = -1;
    while(start<=end){
      int element=v[mid];
      if(element==target) {
        ans =mid;
        start = mid+1;
      }
      else if (element<target) start = mid+1;
      else{
        end = mid-1;
      }
      mid = start + (end -start)/2;
    }
    return ans;
 }
  int main()
{
  int n,a;
  cin>>n;
  vector<int>v;
  cout<<"Enter vector elements:"<<endl;
  for(int i=0;i<n;i++){
    cin>>a;
    v.push_back(a);
  }
  cout<<"Enter target element :";
  int target;cin>>target;
  
  int found = lastOccurrence(v,target);
  if(found) {
    cout<<"Element's last Occurence is at index "<<found<<endl;
      }
 // ********Solve using Predefined function upper bound*********

    

  return 0;
}