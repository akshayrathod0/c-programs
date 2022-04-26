#include<iostream>
using namespace std;
class Overloading{
    public: void display()
    {
        cout<<"function with no arguments"<<endl;
    }
    public: void display(int a)
    {
        cout<<"function with integre argument"<<endl;
    }
    public: void display(double b)
    {
        cout<<"function with double argument"<<endl;
    }
};
int main()
{   
    Overloading o;
    o.display();
    o.display(5);
    o.display(12.5);
    return 0;
}