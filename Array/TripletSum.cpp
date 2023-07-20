#include<bits/stdc++.h>
using namespace std;

 void tripletSum(int arr[],int n,int sum){
  cout<<"The triplets are :"<<endl;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      for(int k= j+1;k<n;k++){
        if(arr[i]+arr[j]+arr[k]==sum) {
          cout<<"{"<<arr[i]<<","<<arr[j]<<","<<arr[k]<<"}" <<"   ";
        }
      }
    }
  }
 }
  int main()
{
  int arr[] = {10,20,30,40,50,60,70,80,90};
  int n = sizeof(arr)/sizeof(arr[0]);
  int sum = 120;
  tripletSum(arr,n,sum);
  return 0;
}