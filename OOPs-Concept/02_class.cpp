#include<bits/stdc++.h>
using namespace std;
//***********************ENCAPSULATION**************************************************
// Encapsulation :-> In this method we wrap the data member and member function in the class Animal
// Make the data member private is called prefect encapsulation 


class Animal{
        private :
             int age;
             int weight;
        public :
           void eat(){
            cout<<"Eating"<<endl;
           }     
           void sleep(){
            cout<<"sleeping"<<endl;
           }
           int getAge(){
              return this->age;
           }
           void setAge(int age){
            this->age=age;
           }
};
//***********************INHERITANCE********************************************


class Mamelia{    //super class
        private :
             int age;
             int weight;
        public :
           void eat(){
            cout<<"Eating"<<endl;
           }     
           void sleep(){
            cout<<"sleeping"<<endl;
           }
           int getAge(){
              return this->age;
           }
           void setAge(int age){
            this->age=age;
           }
};
class Human:public Mamelia{      // sub class of the super class

};
// The aforesaid inheritance was single level inheritance where inheritance between one child and one parent 
//***Multilevel Inheritance******
 class Fruit{
      public :
         string name;
 };
 class Mango :public Fruit{
      public :
        int weight;
 };
 class Alphanso : public Mango{
            public :
              int price;
 };
 //******Multiple Inheritance*******
 // Tiger + Lion 
 //      Liger
class A{
      public :
       int physics;
};
class B{
      public :
       int chemistry;
};
class C : public A,public B{
   public :
     int math;
};
/*The Diamond Problem, Explained bellow
The Diamond Problem occurs when a child class inherits 
from two parent classes who both share a common grandparent class. 
This is illustrated in the diagram below:*/
class A1{
      public :
       int dsa;
       A1(){
         dsa=256;
       }
};
class B1{
      public :
       int dsa;
       B1(){
         dsa=359;
       }
};
class C1 : public A1,public B1{
   public :
     int dbms;
};
//*****Hierarchical Inheritance*****
class car{
   public:
     int age ;
     int weigth;
     string name;

     void speedup(){
      cout<<"speeding up"<<endl;
     }
};
class scorpio : public car{

};
class Fortuner : public car{

};
// *****Hybrid inheritance******


//************************************POLYMORPHISM************************************

//two types of polymorphism compile time polymorphism and run time polymorphism

//*****compile time polymorphism*****
//compile time polymorphism tow types function overloading and operator overloading
//******Function overloading*******
class mathematics{
        public:
         int sum(int a,int b){
         cout<<"I am in first signature"<<endl;
            return a+b;
         }
         int sum(int a,int b,int c){
            cout<<"I am in second signature"<<endl;
            return a+b+c;
         }
         int sum(int a,double b){
            cout<<"I am in third signature"<<endl;
            return a+b+100;
         }
};
//****Operator overloading*****
/* a.add(b)
a ->current object 
+ ->function call or Member function
b-> input parameter
*/
class parameter{
          public:
           int val;

          void operator+(parameter p11){
            int val1=this->val;
            int val2 = p11.val;
            cout<<(val2-val1)<<endl;
          } 

};






int main()
{
    //****ENCAPSULATION****
//    Animal dog;
//    dog.setAge(20);
//    cout<<"Age of the dog is "<<dog.getAge()<<endl; 
    // ****INHERITANCE***
    //1. single level
    Human Nirmal;
    Nirmal.eat();
    //2.Multilevel
    Alphanso a;
    cout<<a.name<<" "<<a.weight<<" "<<a.price<<endl;
    //3.Multiple
    C obj;
    cout<<obj.physics<<" "<<obj.chemistry<<" "<<obj.math<<endl;
    C1 core;
    cout<<core.A1::dsa<<" "<<core.dbms<<endl; // Scope resolution operator:-> core.A1::dsa
    //4.Hiarchical inheritance
    scorpio s11;
    s11.speedup();
    Fortuner f11;
    f11.speedup();
    //5.Hybrid inheritance

    //****POLYMORPHISM*****
    //Function overloading
    mathematics m11;
    cout<<m11.sum(5,2.72)<<endl;
    //*Operator overloading*
    parameter p11,p12;
    p11.val=7;
    p12.val=2;
//this should print the difference between them :->
    p11+p12;

return 0;
}