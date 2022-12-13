#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[]={10,20,30,40,50};
int *p;
p=a;
int i;
for(i=0;i<5;i++)
{
    cout<<*p<<"\n";
    p++;
}
p=a;
cout<<endl;
for(i=0;i<5;i++)
{
    cout<<*(p+i)<<endl;
    // p++;
}
return 0;
}