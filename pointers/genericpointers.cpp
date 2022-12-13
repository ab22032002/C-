#include<bits/stdc++.h>
using namespace std;
int main()
{
    void *vp;// generic pointer 
    int a =90;
    vp=&a;
    // cout<<"the value holded by the generic pointer is : "<<*vp;
    //*vp gives error we must tupecast it before using;
    cout<<"the value holded by the generic pointer is : "<<*(int*)vp;
    float b=900.990;
    vp=&b;
    cout<<"\nthe value holded by the generic pointer is : "<<*(float*)vp;

}