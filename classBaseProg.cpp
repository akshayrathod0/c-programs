#include<iostream>
using namespace std;
class UseOfSpecifier
{
    private:
    int a,b,c;
    public: int d,e;
    void setData(int a1, int a2, int a3); //
    void getData()
    {
    cout<<"value of a="<<a<<endl;
    cout<<"value of b="<<b<<endl;
    cout<<"value of c="<<c<<endl;
    cout<<"value of d="<<d<<endl;
    cout<<"value of e="<<e<<endl;
    }
};
void  UseOfSpecifier :: setData(int a1,int b1,int c1)
    {
        a=a1;
        b=b1;
        c=c1;
    }
int main()
{
    UseOfSpecifier uos;
    uos.d=15;
    uos.e=25;
    uos.setData(10,20,30);
    uos.getData();
    return 0;
}