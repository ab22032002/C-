#include<bits/stdc++.h>
using namespace std;
int main()
{
char a[]="This is my House";
char *t,*s,*b;
s=a;
b=a+strlen(a);
t=b;
while(s!=t)
{
    cout<<*s<<"\t";
    s++;
    cout<<*t<<"\n";
    t--;
}
return 0;
}