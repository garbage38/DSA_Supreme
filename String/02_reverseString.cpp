#include<bits/stdc++.h>
using namespace std;

void reverseString(char name[]){
  int i=0;int j = strlen(name) -1;
  while(i<=j){
    swap(name[i++],name[j--]);
  }
}
// Relplace the space in a sentence to @ sign :->
void replace(char sentence[]){
  int i=0,n=strlen(sentence);
  for(i=0;i<n;i++){
    if(sentence[i]==' '){
      sentence[i]='@';
    }
  }
}

  int main()
{
  char ch[100];


  // cin>>ch;
  // cout<<"Initially  "<<ch<<endl;
  // reverseString(ch);
  // cout<<"After reversing :  "<<ch<<endl;

  cin.getline(ch,100);
  replace(ch);
  cout<<ch<<endl;

  return 0;
}