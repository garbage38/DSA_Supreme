/* Find max and min
   element from an arr using recursion*/

   #include<bits/stdc++.h>
   using namespace std;
    
    void findMaxi(int arr[],int n,int i,int &maxi){
           //base case
           if(i>=n)
             return;
          //1st case khud solve koro
          maxi = max(maxi,arr[i]);

          //Baki recursion sambhal lega
          findMaxi(arr,n,i+1,maxi);   
    }
    void findMini(int arr[],int n,int i,int &mini){
        
        //base case
           if(i>=n)
             return;
          //1st case khud solve koro
          mini = min(mini,arr[i]);

          //Baki recursion sambhal lega
          findMini(arr,n,i+1,mini); 
        
    }

    int main()
   {
    int arr[10]={0, 2, 4, 6, 8, 10, 12, 14, 16, 18};
    int n=10;
    int i=0;
    int maxi =INT_MIN;
    int mini = INT_MAX;
    findMaxi(arr,n,i,maxi);
    findMini(arr,n,i,mini);
    cout<<"maximum element is "<<maxi<<endl;
    cout<<"minimum element is "<<mini<<endl;
    return 0;
   }