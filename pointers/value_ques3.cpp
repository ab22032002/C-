#include<bits/stdc++.h>
using namespace std;
int main()
{
int a =8;
int *p;
p=&a;
a*=5;
cout<<*p<<"\n";
a=a/ *p  ;// if it did'nt have space it would read it as multiline comments : 
cout<<a;
cout<<"\n"<<*p;
return 0;
}