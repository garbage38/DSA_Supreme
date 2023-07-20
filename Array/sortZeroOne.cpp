#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){  
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
 
 void sortZeroOne(int arr[],int n,int s,int e){
 int i=0;
      while(i != e){
        if(arr[i]==0){
          swap(&arr[i],&arr[s]);  //Use pass by reference Pass by value can't give result
          i++;s++;
        }
         if(arr[i]==1){
          swap(&arr[i],&arr[e]);
          e--;
        }
      }
 }
  int main()
{
  int arr[]={0,1,1,0,1,0,1,0,0};
  int n= sizeof(arr)/sizeof(arr[0]);
  int s=0;int e = n-1;
  sortZeroOne(arr,n,0,n-1);

//Print the modified array
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}