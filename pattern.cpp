#include<iostream>
using namespace std;
int main()
{
    // int row,col;
    // cin>>row>>col;
    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= col; j++)
    //     {
    //         if (i==1 || i==row || j==1 || j==col)
    //         {
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }

    //     }
    //      cout<<endl;
    // }
    // int n;
    // cin>>n;
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j<=i; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // int n;
    // cin>>n;
    // for (int i = 1; i<=n; i++)
    // {
    //     for (int j = 1; j<=i; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;    
    // }
    // int n;
    // int space=4;
    // cin>>n;
    // for (int i = 1; i<=n; i++)
    // {
    //     for (int j = 1; j<=n; j++)
    //     {
    //         if (j<=n-i)
    //         {
    //             cout<<" ";
    //         }else{
    //             cout<<"*";
    //         }
            
    //     }
    //     cout<<endl;    
    // }

    // write a program to print pattern like this
    // 1 2 3 
    // 4 5
    // 6
    // int n1;
    // int count=0;
    // cin>>n1;
    // for (int i = 1; i<=n1; i++)
    // {   
    //     for (int j = 1; j <=n1; j++)
    //     {   
    //         if (j<=n1-i)
    //         {
            
    //         count++;
    //         cout<<count<<" ";
    //         }
    //     }
        
    //     cout<<endl;   
    // }

    // write a program to draw a pattern like this 
// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *
    // int n2;
    // cin>>n2;
    // for (int i = 1; i <= n2; i++)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<"*";
    //     }
    //     int space = 2*n2 - 2*i;
    //     for (int j = 1; j <= space; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = 1; j<=i; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;     
    // }

    // for (int i = n2; i >= 1; i--)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<"*";
    //     }
    //     int space = 2*n2 - 2*i;
    //     for (int j = 1; j <= space; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = 1; j<=i; j++)
    //     {
    //         cout<<"*";
    //     }
        
    //     cout<<endl;
        
    // }


// program to print the pattern like this
// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1
    // int n3;
    // cin>>n3;
    // for (int i = 0; i <= n3; i++)
    // {
    //     for (int j = 1; j<=n3-i; j++)
    //     {
    //             cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    


// write a program to print pattent like this
/*
1 
0 1
1 0 1
0 1 0 1 
*/
    // int n4;
    // cin>>n4;
    // for (int i = 1; i <= n4; i++)
    // {
    //     for (int j = 1; j<=i; j++)
    //     {
    //         if ((i+j)%2==0)
    //         {
    //             cout<<"1 ";
    //         }
    //         else{
    //         cout<<"0 ";
    //         }
    //     }
    //     cout<<endl;
    // }


// write a program to draw a pattern like this
/*
   ****
  ****
 ****
****
*/
    // int n5;
    // cin>>n5;
    // for (int i=1; i<=n5; i++)
    // {
    //     for (int j = 1; j <=n5-i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j = 1; j <= n5; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
        
    // }

// write a program to draw pattern like this
/*
   1 
  1 2
 1 2 3
1 2 3 4
*/
   int n6;
   cin>>n6;
   for (int i = 1; i <= n6; i++)
   {
       for (int j = 1; j <= n6-i; j++)
       {
           cout<<" ";
       }
       for (int j = 1; j <= i; j++)
       {
           cout<<j;
       }
       cout<<endl;      
   }
 
   return 0;
}