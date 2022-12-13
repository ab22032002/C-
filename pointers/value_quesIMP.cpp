#include<bits/stdc++.h>
using namespace std;
int main()
{
int x=9,*p, **q,y,z;
p=&x;
q=&p;
*p+=3;
y=*p;
**q*=2;
z=**q;
++x;
cout<<x<<" "<<y<<" "<<z<<"\n";
cout<<x+y+z;
return 0;
}