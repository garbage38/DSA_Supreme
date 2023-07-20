#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&v,int s,int e){
  int mid =(s+e)/2;

//break into two halves : which is mustly required for array but not necessaryli in vector
  int l1= mid-s+1;
  int l2= e-mid;
//create two vector of size l1 and l2
vector<int>v1(l1);
vector<int>v2(l2);

//copy values of v to v1 and v2
int k=s;
for(int i=0;i<l1;i++){
  v1[i] = v[k];
  k++;
}
 k=mid+1;
for(int i=0;i<l2;i++){
  v2[i] = v[k];
  k++;
}

//compare v1 and v2 then insert data new vector
int lI=0;int rI=0;int mI=s ;//lI - lefft index,rI- right index mI-main Index

while(lI<l1 && rI<l2){
   if(v1[lI]<v2[rI]){
    v[mI++]=v1[lI++];
   }
   else{
    v[mI++]=v2[rI++];
   }
}
while(lI<l1){
   v[mI++]=v1[lI++];
}
while(rI<l2){
    v[mI++]=v2[rI++];
}

}


void mergesort(vector<int>&v,int s,int e){
   if(s>=e)
      return;
   int mid = (s+e)/2;
   mergesort(v,s,mid);   
   mergesort(v,mid+1,e); 

   merge(v,s,e);  
}
  int main()
{
  vector<int>v{12,7,15,4,19,81,56,23,17};
  int s=0;
  int e = v.size()-1;

  mergesort(v,s,e);
  for(auto val :v){
    cout<<val<<" ";
  }
  return 0;
}