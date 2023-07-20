#include<bits/stdc++.h>
using namespace std;

// Swap using xor operation :->

void swap(int x,int y){
  cout<<"Before swap"<<x<<" "<<y<<endl;
  x = x^y;
  y=y^x;
  x=x^y;

  cout<<"After swap"<<x<<" "<<y<<endl;
}

//Swap using temp variable :->

void swap(int x,int y){
  cout<<"Before swap"<<x<<" "<<y<<endl;
  int temp =x;
  x =y;
  y = temp;
  cout<<"After swap"<<x<<" "<<y<<endl;
}

//swap using + - 
void swap(int x,int y){
  cout<<"Before swap"<<x<<" "<<y<<endl; 
  x = x+y;
  y = x-y;
  x = x-y;
cout<<"After swap"<<x<<" "<<y<<endl;
}

  int main()
{
  swap(56,36);
  return 0;
}