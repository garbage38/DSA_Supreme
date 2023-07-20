#include<bits/stdc++.h>
using namespace std;
void printPair(int arr[],int n,int sum){
  for(int i=0;i<n;i++){
    int element = arr[i];
    for(int j=i+1;j<n;j++){
        if(element+arr[j]==sum){
          cout<<"The pair : {"<<element<<", "<<arr[j]<<"}"<<endl;
        }
    }
  }
}
  int main()
{
  int arr[]= { 1, 5, 7, -1, 5 };
  int n = sizeof(arr)/sizeof(arr[0]);
  int sum = 6;
  printPair(arr,n,sum);
  return 0;
}

