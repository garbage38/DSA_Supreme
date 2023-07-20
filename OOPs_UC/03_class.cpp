#include<bits/stdc++.h>
using namespace std;
//****POLYMORPHISM*******
//***Run time polymorphism**
class animal{
     public :
       void speak(){
         cout<<"speaking"<<endl;
       }
};
class dog:public animal{
        public:
          void speak(){
            cout<<"Barking"<<endl;
          }
};
int main()
{
//Function overriding
dog obj;
  obj.speak();
return 0;
}