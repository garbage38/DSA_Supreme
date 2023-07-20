#include<bits/stdc++.h>
using namespace std;


vector<int>previousSmaller(vector<int>& v){
    stack<int>st;
    st.push(-1);
 vector<int>ans(v.size());
for(int i=0;i<=v.size();i++){
 int curr = v[i];
 while(st.top() >= curr){
  st.pop();
 }
  ans[i]=st.top();
  st.push(curr);
}
 return ans;
}


vector<int>nextSmaller(vector<int>& v){
   stack<int>st;
 st.push(-1);
 vector<int>ans(v.size());
for(int i=v.size();i>=0;i--){
 int curr = v[i];
 while(st.top() >= curr){
  st.pop();
 }
  ans[i]=st.top();
  st.push(curr);
}
 return ans;
}


  int main()
{
  vector<int>v;

  v.push_back(2);
  v.push_back(1);
  v.push_back(4);
  v.push_back(3);
 
cout<<"printing the next smallerelements"<<endl;
vector<int>ans1 = nextSmaller(v);

for (int i = 0; i < v.size(); i++)
{
 cout<<ans1[i]<<" ";
}
cout<<endl;
cout<<"printing the previous smaller elements"<<endl;
vector<int>ans2 = previousSmaller(v);

for (int i = 0; i < v.size(); i++)
{
 cout<<ans2[i]<<" ";
}



  return 0;
}
