#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int on_all(int n,int size)
{  
    for (int i = 3; i < size; i++)
    {
        
    n=n*n;
    cout<<"square is : "<<n<<endl;
    n=i;
    }
    return n;
}
int main()
{
    // int number=34543;
    // int temp=number;
    // int remainder;
    // int sum=0;
    // for (int i = 0; i < 5; i++)
    // {
    //     remainder=number%10;
    //     sum=(sum*10)+remainder;
    //     number=number/10;
    //     cout<<remainder;
    // }
    // if(temp==sum)
    // {
    //     cout<<"\nnumber is palidrome number "<<sum<<endl;
    // }
    // else{
    //     cout<<"\nnumber is not palidrome number "<<sum<<endl;
    // }

    // write a print to print firts 20 number square
    // caling the funstion ReturnSquare
    // cout<<"first 20 square"<<endl;
    // on_all(2,24);
     int n=10;
    int arr[10]={24};
    for (int i = 0; i < n ; i++)
    {   
        cout<<"enter the any 9 number which you want to store in array";
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    // cout<<"now the array elemeny are"<<arr<<endl;
    return 0;
}