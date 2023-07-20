#include<bits/stdc++.h>
using namespace std;
 int binarySearch(vector<int>v,int target){
    int start =0;int end = v.size()-1;
    int mid = start+(end-start)/2;
    while(start<=end){
      int element=v[mid];
      if(element==target) return mid;
      else if (element<target) start = mid+1;
      else{
        end = mid-1;
      }
      mid = start + (end -start)/2;
    }
    return -1;
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
  cout<<"Enter target :";
  int target;cin>>target;
  int found = binarySearch(v,target);
  if(found != -1) {
    cout<<"Element is found";
      }
  else{
    cout<<"Element is not found";
  }

  return 0;
}