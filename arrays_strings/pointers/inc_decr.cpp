#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[]={10,20,30,40,50};
int *p;
p=a+1;
++p;
++*p;
--p;
--*p;
cout<<" "<<a[2]<<" "<<a[1];
return 0;
}