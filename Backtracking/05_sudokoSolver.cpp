#include<iostream>
#include<vector>
#include<limits.h>
#include<math.h>
#include<string.h>
using namespace std;

bool isSafe(int value,int arr[][9],int i,int j){
  //row check
for(int col=0;col<9;col++){
  if(arr[i][col]==value){
    return false;
  }
}
  // col check
for(int row=0;row<9;row++){
  if(arr[row][j]==value){
    return false;
  }
}
  //3*3 matrix check
for(int row=0;row<9;row++){
 if(arr[3*(i/3)+(row/3)][3*(j/3)+(row%3)]==value){
  return false;
 }
}
 return true;
}

bool solve(int arr[9][9],int n){
  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
       //check a empty cell
       if(arr[i][j]==0){
        for(int value=1;value<=9;value++){
          //check safety
          if(isSafe(value,arr,i,j)){
            arr[i][j]=value;
            //recursion call
          bool  agekaSol =  solve(arr,n);
          if(agekaSol==true){
            return true;
          }
          //backtracking
          arr[i][j]=0;
          }
        }
       }
    }
    
  }
  return false;
  
}
  int main()
{
  int arr[9][9]={
{3, 0, 6, 5, 0, 8, 4, 0, 0},
{5, 2, 0, 0, 0, 0, 0, 0, 0},
{0, 8, 7, 0, 0, 0, 0, 3, 1},
{0, 0, 3, 0, 1, 0, 0, 8, 0},
{9, 0, 0, 8, 6, 3, 0, 0, 5},
{0, 5, 0, 0, 9, 0, 6, 0, 0}, 
{1, 3, 0, 0, 0, 0, 2, 5, 0},
{0, 0, 0, 0, 0, 0, 0, 7, 4},
{0, 0, 5, 2, 0, 6, 3, 0, 0}
  };
  int n=9;
  bool ans = solve(arr,n);
  if(ans){
    cout<<"Suduko is possible ";
  }
  else{
    cout<<"sudoko is not possible";
  }
  return 0;
}