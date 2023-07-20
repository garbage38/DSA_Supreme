#include<bits/stdc++.h>
using namespace std;

class Animal{
      public:
        
      // virtual 
      Animal(){
        cout<<"This is animal container";
      } 
      void speak(){
          cout<<"speaking";
        }
};
class Dog:public Animal{
       public:
         Dog(){
        cout<<"This is dog container";
      } 
       void speak(){
        cout<<"Barking";
       }
};
  int main()
{  
  //**********Function Overriding******
  //  Dog d;
  //  d.speak(); 
  //  cout<<endl;

  //*******dynamic object creation**********


  // Animal *an = new Animal();
  // an->speak();
  //  cout<<endl;

 //*****UpCasting*********

//  Animal * a = new Dog();
//  a->speak();
//  cout<<endl;

 // ans : speaking parent function call 
 // if we add virtual keyword in  parent class then this above speak() is decide in runtime and barking will be printed 

 //DownCasting ;->
//  Dog *b =(Dog*) new Animal();
//  b->speak();

// Animal *a = new Animal();
//  This is animal container

  //  Animal * a =(Dog*) new Dog(); 
  //  This is animal containerThis is dog container

  // Dog *d= new Dog();
  // This is animal containerThis is dog container

  // Dog *d=(Dog*) new Animal();
  // This is animal container

  return 0;
}
