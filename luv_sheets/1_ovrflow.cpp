// #include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
// {    -10^9<int<10^9
//      -10^12<long int<10^12
//      -10^18<long long int <10^18
/***** Maximum in int *****************/
int mx= INT_MAX;//2147483647
cout<<mx<<endl;
int a = 1e5;
int b = 1e5;
cout<<"hello World"<<endl;
cout<<a*b<<endl;   //1410065408
// another problem 
long c ;
c= a*b;
cout<<c<<endl;  //1410065408 as it first get calculated in int and then get converted into the long 
 // solutions to the problem 
long long int x = 1e5;
long long int y= 1e5;
cout<<x*y<<endl;
 // solution number 2 
cout<<a*1LL*b<<endl;
// why not to use the double let's see 
double l = 10e24;
cout<<l<<endl;
cout<<fixed<<l<<endl; // to make it not scientific 
cout<<fixed<<setprecision(0)<<l<<endl;  //10000000000000000905969664.000000
//10000000000000000905969664  respeective outputs 
// setprecison is used to set the number of precision we wanted to set 
    return 0;
}
