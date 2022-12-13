#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a=10,*p,**ptr;
   p=&a;
   ptr=&p;
   cout<<"the Values regarding the pointer and dereferencing operators:\n"
       <<*p<<" "<<**ptr<<" "<<a<<" "<<*&a<<" "<<**&p<<" "<<***(&ptr);
   cout<<"the address regarding a is \n : "<<
        p<<" "<<&a<<" "<<*ptr<<" "<<*&p<<" "<<**&ptr;
return 0;
}
