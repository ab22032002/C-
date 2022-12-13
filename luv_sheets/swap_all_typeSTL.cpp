#include<bits/stdc++.h>
using namespace std;
template<class T>
void swapp(T&a,T&b)
{
    cout<<"this is the values before SWapping: a="<<a<<"\t b="<<b<<endl;
    T temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"this is the values before after Swapping: a="<<a<<"\t b="<<b<<endl;
}
int main()
{
swapp(100,4343);
swapp(67.23,3433.23);
swapp('x','Z');
return 0;
}