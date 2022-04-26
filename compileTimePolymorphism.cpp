#include<iostream>
using namespace std;
class operatorOverloading{
    public:
    int real,imag;
    operatorOverloading(int r=0, int i=0){
         real=r;
         imag=i;
    }
    operatorOverloading operator +(operatorOverloading const &obj)
    {
        operatorOverloading opt;
        opt.real=real+obj.real;
        opt.imag=imag+obj.imag;
        return opt;
    }
    void display()
    {
        cout<<real<<" +i"<<imag<<endl;
    }
};
int main()
{
    operatorOverloading oo1(12,7),oo2(6,7);
    operatorOverloading oo3=oo1+oo2;
    oo3.display();
    return 0;
}