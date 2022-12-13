#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,b=1;
    int *p=&a,
        *q=&b;
    p=q;
    ++*p;
    ++*q;
    ++a;
    ++b;
    cout<<"a="<<a<<"\nb="<<b;
    return 0;
}