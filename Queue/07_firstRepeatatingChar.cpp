#include<bits/stdc++.h>
using namespace std;

string solve(string str){
  queue<char>q;
  int freq[26]={0};
  string ans="";

  for(int i=0;i<str.length();i++){
       char ch=str[i];
       //increment frequency
       freq[ch-'a']++;
       //push the character into the queue
       q.push(ch);

       while (!q.empty())
       {
        /* code */
          if(freq[q.front()-'a']>1){
            q.pop();
            // freq[q.front()-'a']--;
          }
          else{
            ans.push_back(q.front());
            break;
          }
       }
       if(q.empty()){
        ans.push_back('#');
       }

      
  }
   return ans;
}
  int main()
{
  string str ="zarcaazrd";
  cout<<"The final string is  :"<<solve(str);

  return 0;
}