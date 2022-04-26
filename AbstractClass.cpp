#include<iostream>
#include<cmath>
#include<ctime>
#include<iomanip>
using namespace std;
// class AbstractClass{
//     public:
//     virtual void disp()=0;
// };
// class derived:public AbstractClass
// {
//     public:
//     void disp()
//     {
//         cout<<"this is disp function";
//     }
// };
int main()
{   
    long int ch;
    int n;
    float f;
    string s;
    double d;
    cout<<sizeof(ch)<<endl;
    cout<<sizeof(n)<<endl;
    cout<<sizeof(f)<<endl;
    cout<<sizeof(d)<<endl;
    // cout<<sizeof(s)<<endl;
    cin>>n;
    // if(n>=2147483647)
    // {
    //     cout<<"out of range";
    // }
    // else
    // {
    //     cout<<"in a range";
//     }
//      double pi = 3.14159265;
//      cout << setfill('-'); // setfill() sets to fill the blanks with specified character
//    cout << " The value of pi 4 decimal place of total width 8   : |" << setw(8) << pi << "|" << endl; 
//    cout << " The value of pi 4 decimal place of total width 10  : |" << setw(10) << pi << "|"<< endl; 
    cout<<n<<n<<n<<n<<endl;
    cout<<n<<" "<<" "<<n<<endl;
    cout<<n<<" "<<" "<<n<<endl;
    cout<<n<<" "<<" "<<n<<endl;
    cout<<n<<" "<<" "<<n<<endl;
    cout<<n<<n<<n<<n<<endl;
time_t t = time(NULL);
 tm* tPtr = localtime(&t);
 cout << "\n\n Display the Current Date and Time :\n";
 cout << "----------------------------------------\n";
 cout << " seconds = " << (tPtr->tm_sec)<<endl;
 cout << " minutes = " << (tPtr->tm_min) << endl;
 cout << " hours = " << (tPtr->tm_hour) << endl;
 cout << " day of month = " << (tPtr->tm_mday) << endl;
 cout << " month of year = " << (tPtr->tm_mon)+1 << endl;
 cout << " year = " << (tPtr->tm_year)+1900 << endl;
 cout << " weekday = " << (tPtr->tm_wday )<< endl;
 cout << " day of year = " << (tPtr->tm_yday )<< endl;
 cout << " daylight savings = " <<(tPtr->tm_isdst )<< endl;
        cout << endl;
        cout << endl;


        cout << " Current Date: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl;
        cout << " Current Time: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl; 
           cout << endl;
           int x=10;
           cout<<"after casting the number"<< (float)x;
           int y=10.22;
           cout<<"addtion after casting"<<x+y;
    return 0;
}