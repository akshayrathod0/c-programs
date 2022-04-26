#include<iostream>
using namespace std;

int findMax(int arr[], int size)
{
    int max = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max);
        {
            max = arr[i];
        }
        
    }
  return max;    
}
int search(int arr[], int size, int key)
{   
    cout<<"enter the key you want to search"<<endl;
    cin>>key;
   for (int i = 0; i < size; i++)
   {
       if (arr[i]==key)
       {
            cout<<"found at index "<<i<<endl;
            // return arr[i];
       }
       
   }
   return 0;
   
}
int reverseArray(int arr[], int start, int last)
{  
    int temp; 
 while (start<last)
    {   
        temp = arr[start];
        arr[start] = arr[last]; 
        arr[last] = temp;
        start++; 
        last--;
    } 
}

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}

int main()
{
    int size;
    // cin>>size;
    int sum;
    int arr[6]={30,20,40,50,12,43};
    // cout<<"enter the element you want to print"<<endl;
    int key;
    // for (int i = 0; i < size; i++)
    // {
    //     cin>>arr[i];
    //     sum=arr[i]+sum;
    // }    

    // cout<<"sum of array elements "<<sum<<endl;
    int found = search(arr,6,key);
    // if ( found )
    // {
    //  cout<<"element found"<<found<<endl;
    // }
    // else
    // {
    //   cout<<"Element not found"<<endl;
    // } 
    int n = sizeof(arr)/sizeof(int);
    int temp;
    int start;
    int last=(n-1);
    // reverseArray(arr,0,n-1);
    // printArray(arr,6);
}
