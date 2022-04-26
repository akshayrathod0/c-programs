#include<iostream>
using namespace std;
int main()
{
    int n=13;
    int arr[n]={1,2,3,4,5,6,7,8,9,10,15,30,20};
    int count;
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=arr[i];
    }
    return temp;
    cout<<" reverse array are = "<<endl;
}