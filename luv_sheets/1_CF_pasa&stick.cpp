#include<iostream>
using namespace std;
int main()
{  
    cout<<"enter the value of the n";
    int k,count,n;
    cin>>k;
    n=k/2; 
    for(int i=1;i<=n/2;i++)
     {
         for(int j=n/2+1;j<=n;j++)
         {
             if((i+j)==n &&(i!=j))
             {
                 count++;
             }

         }
     }
     cout<<count;
    return 0;
}
// https://codeforces.com/problemset/problem/610/A
// time limit exceeded although the code is running very rightly 