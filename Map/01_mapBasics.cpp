#include<bits/stdc++.h>
using namespace std;
int main()
{
unordered_map<string,int>mp;

//insert 
pair<string,int>p1=make_pair("scorpio",9);
mp.insert(p1);

pair<string,int>p2("Fortuner",12);
mp.insert(p2);

mp["Thar"]=18;

//Access
cout<<mp.at("scorpio")<<endl;
cout<<mp["Thar"]<<endl;

//search
cout<<mp.count("Thar")<<endl;
if(mp.find("Thar") != mp.end()){
cout<<"Thar found"<<endl;
}
else{
cout<<"Thar is not foune"<<endl;
}
for(auto i : mp){
  cout<<i.first<<"->"<<i.second<<endl;
}
return 0;
}