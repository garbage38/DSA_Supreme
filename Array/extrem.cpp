#include<bits/stdc++.h>
using namespace std;
  int main()
{
  int arr[]={1,2,3,4,5,6,7,8,9};
  int size = 9;
  int start =0 ;int end = size-1;

  // while(start<=end){
  //   cout<<arr[start]<<" ";
  //   cout<<arr[end]<<" ";
  //   start++;
  //   end--;  
  // }   //1 9 2 8 3 7 4 6 5 5  for odd number of array size we got the mid element twice time

   while(start<=end){
    if(start==end){
      cout<<arr[start];   //1 9 2 8 3 7 4 6 5
      break;
    }
    cout<<arr[start]<<" ";
    cout<<arr[end]<<" ";
    start++;
    end--;  
  }  

  return 0;
}