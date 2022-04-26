#include<iostream>
using namespace std;
class Animal{
    private:
    string gender;
    public:
    string color, name;
    float height, shape;
    void setData(string g); //Declaration
    void  getdata()
    {
        cout<<"Animal gender is ="<<gender<<endl;
        cout<<"Animal color is ="<<color<<endl;
        cout<<"animal shape ="<<height<<endl;
        cout<<"animal name is ="<<name<<endl;
        cout<<"animal height is ="<<height<<endl;
    }
};
void Animal :: setData(string g){
    gender=g;
}
int main()
{
   Animal a1;
   a1.color="red";
   a1.name="deer";
   a1.height=10.02;
   a1.shape=13.04;
   a1.setData("male");
   a1.getdata();
}