#include<bits/stdc++.h>
using namespace std;

int getLength(char name[]){
  int i=0, length =0;
  while(name[i++] != '\0'){
    length ++;
  }
  return length;
}

  int main()
{
  // char ch[100];
  // // getline(cin,ch); //Not running
  // cin.getline(ch,50);
  // cout<<ch;

// Find length

 char name[100];
 cin.getline(name,100);
 int val= getLength(name);
 cout<<"Name size is : "<<val<<endl;
 //Predefined function of find length :->
 cout<<"Name size is : "<<strlen(name);


  return 0;
}
