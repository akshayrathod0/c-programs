#include<iostream>
using namespace std;
int main()
{
    char day;
    cout<<"enter the age"<<endl;
    cin>>day;
    switch (day)
    {
    case 'm':
        cout<<"today' is the monday";
        break;
    
    case 't':
        cout<<"today' is the tuestday";
        break;
    
    case 'w':
        cout<<"today' is the wednesday";
        break;
    
    case 'T':
        cout<<"today' is the thursday ";
        break;
    
    default:
        break;
    }
}