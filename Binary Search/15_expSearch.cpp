#include<bits/stdc++.h>
using namespace std;

int min(int a,int b){
  return a<b?a:b ;
}

int bs(int arr[],int start,int end,int x){
  while(start<=end){
    int mid = (start+end)/2;
    if(arr[mid]==x){
      return mid;
    }
    else if(x>arr[mid]){
      start = mid+1;
    }
    else{
      end = mid-1;
    }
  }
  return -1;
}

int expSearch(int arr[],int n,int x){
  if (arr[0]==x) return 0;
  int i=1;
  while(i<n && arr[i]<=x){
    i *= 2;
  }
  return bs(arr,i/2,min(i,n-1),x);
}
  int main()
{
  int arr[] ={3,4,5,6,11,13,14,15,56,70}; 
  int n = sizeof(arr)/sizeof(arr[0]);
  int x =13 ;// target element
  int ans = expSearch(arr,n,x);
  if(ans != -1){
    cout<<"Element is found in the list";
  }
  else{
    cout<<"Element is not present in the list";
  }
  return 0;
}