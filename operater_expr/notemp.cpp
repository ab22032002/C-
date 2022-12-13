#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    a=300;
    b=100;
    cout<<"values get swapped using no other variable than a and b "<<endl;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping\n"<<"a="<<a<<" "<<"b="<<b<<endl;
 return 0;
}

