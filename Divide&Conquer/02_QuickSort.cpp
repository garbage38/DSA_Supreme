#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&v,int s,int e){
     int pivotIndex=s;
     int pivot=v[s];

     int cnt=0;
     for (int i = s+1; i <= e; i++)
     {
      /* code */
      if(v[i]<=pivot){
        cnt++;
      }
     }

     int rightIndex=s+cnt;
     swap(v[pivotIndex],v[rightIndex]);
     
     pivotIndex=rightIndex;
     int i=s;int j=e;
     while(i<pivotIndex && j>pivotIndex){
        while(v[i]<=pivot){
           i++;
        }
         while(v[j]>pivot){
           j--;  
         }

           if(i<pivotIndex && j>pivotIndex){
             swap(v[i],v[j]);
           } 
     }
     return pivotIndex;
     
}

void quickSort(vector<int>&v,int s,int e){
  if(s>=e)
     return;
  int p = partition(v,s,e); 
  quickSort(v,s,p-1);
  quickSort(v,p+1,e);  
}

  int main()
{
  vector<int>v{3,3,3,3,46,7,46,4,5,1,1,1,1,2,2,2,2,2};
  int s=0;
  int e=v.size()-1;
  quickSort(v,s,e);

  for(auto val:v){
    cout<<val<<" ";
  }
  return 0;
}