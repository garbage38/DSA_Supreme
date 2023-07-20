#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int s,int e){
    int mid =(s+e)/2;
    int len1= mid-s+1;
    int len2=e-mid;

    int *left=new int[len1];
    int *right=new int[len2];
    // copy value in left and right array
    int k=s;
    for(int i=0;i<len1;i++){
        left[i]=arr[k];
        k++;
    }
    k=mid+1;
    for(int i=0;i<len2;i++){
        right[i]=arr[k];
        k++;
    }

    int leftArrIndex=0,rightArrIndex=0;
    int mainArrIndex=s;
// sort and conquer them
    while(leftArrIndex<len1 && rightArrIndex<len2){

        if(left[leftArrIndex]<right[rightArrIndex]){
           arr[mainArrIndex++]=left[leftArrIndex++];
        }
        else{
            arr[mainArrIndex++]=right[rightArrIndex++];
        }
    }
    while(leftArrIndex<len1){
        arr[mainArrIndex++]=left[leftArrIndex++];
    }
    while(rightArrIndex<len2){
         arr[mainArrIndex++]=right[rightArrIndex++];
    }
  
}

void mergesort(int *arr,int s,int e){
    if(s>=e) return;
    int mid = (s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);

   merge(arr,s,e);
}

int main(){
  int arr[]={3,46,7,46,4,5,1,2,2,2,2,2};
  int n = sizeof(arr)/sizeof(arr[0]);

int s= 0;
int e = n-1;
 mergesort(arr,s,e);
cout<<"The sorted array is "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
    return 0;
}