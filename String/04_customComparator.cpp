#include<bits/stdc++.h>
using namespace std;

bool comparator(char first,char second){
  return first>second;
}

bool cmp(int first,int second){
  return first>second;
}

  int main()
{
  string s = "nirmal";
  // sort(s.begin(),s.end());
  sort(s.begin(),s.end(),comparator);
  cout<<s<<endl;

vector<int>v{4,3,6,7,1,9};
sort(v.begin(),v.end(),cmp);
for(auto i:v){
  cout<<i<<" ";
}

  return 0;
}