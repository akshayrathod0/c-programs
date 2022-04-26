#include<iostream>
using namespace std;
 class runtimePolymorphism{
     public:
     virtual void print(){
       cout<<"this is base class print function"<<endl;
     }
     void display(){
         cout<<"this is base class display function"<<endl;
     }
 };
 class derivedClass: public runtimePolymorphism{
     public:
     void print()
     {
         cout<<"this is derived class print function"<<endl;
     }
     void display()
     {
         cout<<"this is derived class display functionendl"<<endl;
     }
 };
 int main()
 {
     runtimePolymorphism *pobj;
     derivedClass drv;
     pobj=&drv;
     pobj -> print();
     pobj -> display();
 }