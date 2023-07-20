#include<bits/stdc++.h>
using namespace std;

void printSubsequences(string str,string  output,int i,vector<string>&v){
   //base case
   if(i>=str.length()){
    // cout<<output<<endl;
    v.push_back(output);
    return;
   }
   //exclude
   printSubsequences(str,output,i+1,v);

   //include

  //  output.push_back(str[i]);
  //  printSubsequences(str,output,i+1,v);
  
  //  or
     printSubsequences(str,output+str[i],i+1,v);

}
  int main()
{
  string str = "abc";
  string output="";
  vector<string>v;

  int i=0;
  printSubsequences(str,output,i,v);

  cout<<"printing all subsequences"<<endl;
  for(auto val : v){
    cout<<val<<" ";
  }
  return 0;
}