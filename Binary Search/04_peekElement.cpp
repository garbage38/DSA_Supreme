#include<bits/stdc++.h>
using namespace std;
int peekElement(vector<int>v){
  int start=0;int end=v.size()-1;
  int mid = start+(end-start)/2;
  while(start<end){
    if(v[mid]<v[mid+1])
      start= mid+1;
    else{
      end =mid;
    }  
    mid = start+(end-start)/2;
  }
  return start;

}
  int main()
{
  vector<int>v={0,10,15,2};
  int FindPeek = peekElement(v);
  cout<<"The peek Element is : "<<FindPeek<<endl;
  return 0;
}