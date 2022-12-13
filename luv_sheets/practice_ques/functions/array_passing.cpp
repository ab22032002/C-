// array always passed by value only 
#include<bits/stdc++.h>
using namespace std;\
void func(int a[])
{
    a[0]=90;
}
int main()
{
   int c[10];
   c[0]=23;
   cout<<c[0]<<endl;
   func(c);// passing the array name only 
   cout<<c[0]<<endl;
}
/*** 
 * various types of array inputs 
 * func(int m ,int n ,int a[][n])
 * or 
 * we can globbaly declare the array 
 * int N=1e5+10;
 * int a[N][N] this is always greater than what asked to us 
 * 
 */