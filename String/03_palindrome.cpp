#include<bits/stdc++.h>
using namespace std;

int getLength(char name[]){
  int i=0, length =0;
  while(name[i++] != '\0'){
    length ++;
  }
  return length;
}
//For checking we use two pointer approach
 bool checkPalindrome(char word[]){
  int i=0,j=getLength(word) -1;
  while(i<=j){
    if(word[i] != word[j]){
      return false;
    }
    else{
      i++;j--;
    }
  }
  return true;
 }
 //Upper case convertion :->
 void convertUppercase(char ch[]){
  int i=0,n = getLength(ch);
  for(i=0;i<n;i++){
    ch[i]=ch[i]-'a'+'A';
  }
 }
 void convertLowercase(char ch[]){
  int i=0,n = getLength(ch);
  for(i=0;i<n;i++){
    ch[i]=ch[i]-'A'+'a';
  }
 }

  int main()
{
  char ch[100] = "DUNUBIRHAL";
  // convertUppercase(ch);
  convertLowercase(ch);
  cout<<ch;
  
  // char ch
  // cin>>ch;
  // if(checkPalindrome(ch)){
  //   cout<<"string is palindrome";
  // }
  // else{
  //   cout<<"Stirng is not palindrome";
  // }

  return 0;
}

