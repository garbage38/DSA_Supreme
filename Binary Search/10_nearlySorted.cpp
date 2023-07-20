#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr,int target){
  int s=0;int e = arr.size()-1;
  int mid = s +(e-s)/2;
  while(s<=e){
    if(arr[mid]==target)
       return mid;
    if((mid-1)>=0 &&arr[mid-1]==target) //if mid =0 then mid-1 = -1 is not valid we face problem
       return mid-1;
    if((mid+1)<arr.size() && arr[mid+1]==target)
       return mid+1;  

    else if(arr[mid]<target){
      s=mid+2;
    }
    else
       e = mid-2;

    mid = s+(e-s)/2;   
               
  }
  return -1;
}
  int main()
{
  vector<int>arr = {10,3,40,20,50,70,80};
  // int size = arr.length();
  int target = 70;
  int ans = binarySearch(arr,target);
  cout<<"Target is found at index :"<<ans<<endl;
  return 0;
}