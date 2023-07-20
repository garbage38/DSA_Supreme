/*Search a key element in a string*/
#include<bits/stdc++.h>
using namespace std;

bool findChar(string &str,int &n,int &i,char &key){
   
       //base case
        if(i>=n)
          return false;

        // check the 1st char ,is this char  present or not
        if(str[i]==key)
         return true;

         //Baki recursion sambhal lega
        return findChar(str,n,++i,key); 

}

  int main()
{
  string str ="nirmalmandal";
  int n=str.length();
  int i=0;
  char key = 'r';
  bool ans = findChar(str,n,i,key);
  cout<<"Is "<<key<<" character present in the string ? "<<ans<<endl;
  return 0;
}