#include<iostream>
using namespace std;
int main()
{
        // program to print addtion of first 10 number
    int sum=0;
    int n;
    cout<<"enter how many number you want to calcate"<<endl;
    cin>>n;  
    int cur=1;
    for (int i = 1; i <= n; i++)
    {
        sum+=cur;
        cur+=2;     
    }
    cout<<"sum of first ten number is here : "<<sum<<endl;   

        
    // program to print addtion of first 10 number even number
    
    int sum1=0;
    int num1;
    cout<<"enter how many number you want to calcate"<<endl;
    cin>>num1; 
    int cur1=0;
    for (int i = 0; i <= num1; i++)
    {
        sum1+=cur1;
        cur1+=2;     
    }
    cout<<"sum of first ten number is here : "<<sum1<<endl;   

    //write a program to print sum of list element
    
    int sum2=0;
    int num2;
    cout<<"enter how many number you want to calcate"<<endl;
    cin>>num2; 
    int arr[] = {1,2,4,5,6,7,7,8,10};
    // int cur2=0;
    for (int i = 0; i < num2; i++)
    {
        sum2+=arr[i]; 
        
    cout<<"sum of first ten number is here : "<<sum2<<endl;    
    }  
    
}