#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[20];
int *p;
for(int i=0;i<20;i++)
{
    arr[i]=i*5+5;
}
cout<<arr[19]<<endl;
// cout<<arr[18];
p=arr;
cout<<p<<endl;
cout<<p++<<endl;
cout<<++p<<endl;
cout<<--p<<endl;
cout<<p--<<endl;
cout<<++*p<<endl;
cout<<(*p)++<<endl;
cout<<*p--<<endl;
cout<<--*p<<endl;
cout<<*p<<endl;
int *q=arr;
cout<<q<<endl;
cout<<*++q<<endl<<q<<endl<<*q<<endl; 
cout<<*q++<<endl<<q<<endl<<*q<<endl; // Print the current value then move to the next location :
cout<<*q--<<endl<<q<<endl<<*q<<endl; // Print the current Value and then movw to the previous location:
return 0;
}