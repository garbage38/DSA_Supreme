#include<bits/stdc++.h>
using namespace std;


vector<int>previousSmaller(vector<int>& v){
    stack<int>st;
    st.push(-1);
 vector<int>ans(v.size());
for(int i=0;i<v.size();i++){
 int curr = v[i];
 while(st.top() != -1 && v[st.top()] >= curr){
  st.pop();
 }
  ans[i]=st.top();
  st.push(i);
}
 return ans;
}


vector<int>nextSmaller(vector<int>& v){
   stack<int>st;
 st.push(-1);
 vector<int>ans(v.size());
for(int i=v.size()-1;i>=0;i--){
 int curr = v[i];
 while(st.top() != -1 && v[st.top()] >= curr){
  st.pop();
 }
  ans[i]=st.top();
  st.push(i);
}
 return ans;
}

int largestRectangularAreaHistogram(vector<int>& heights){
  
  vector<int>next=nextSmaller(heights);
  
  vector<int>prev=previousSmaller(heights);

  int maxArea=INT_MIN;
  int size = heights.size();
  for(int i=0;i<size;i++){
     int length = heights[i];

     if(next[i]==-1){
      next[i]=size;
     }
     int width = next[i]-prev[i]-1;

     int area= length*width;
     maxArea = max(maxArea,area);
  }
  return maxArea;

}


int main(){

vector<int>v;
v.push_back(2);
v.push_back(1);
v.push_back(5);
v.push_back(6);
v.push_back(3);

int ans = largestRectangularAreaHistogram(v);
cout<<"The largest area of Histogram "<<ans<<endl;

  return 0;
}