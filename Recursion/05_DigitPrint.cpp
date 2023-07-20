/*why 0647 = 423? */
// #include<bits/stdc++.h>
// using namespace std;
//   int main()
// {
//   int a = 0647;
//   cout<<a<<" ";
//   return 0;
// }

#include<bits/stdc++.h>
using namespace std;

void printDigit(int n){

  //base case
   if(n==0){
    return;
   }

    //Baki recursion kor lega?
    int newN = n/10;
    printDigit(newN);


    //1 case by me
    cout<<n%10<<" ";
    
}
  int main()
{
  int n=647;
  printDigit(n);
  return 0;
}