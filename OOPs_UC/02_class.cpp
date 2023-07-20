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
 class A{
     public :
       int math;
 };
 class B{
     public:
       int chemistry;
 };
 class C:public A,public B{
           public:
             int physics;
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

    C obj;
    cout<<obj.chemistry<<" "<<obj.physics<<" "<<obj.math<<endl;
    //Mai awouuu
    //Billa Bagad Billa
return 0;
}