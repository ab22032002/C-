#include<bits/stdc++.h>
using namespace std;
int main()
{
char str[]="Malayalam";
char *s;
s=str+8;
while(s>=str)
{
    cout<<*s<<endl;
    s--;
}
cout<<"due to uppercase of M all the letters are printed:";
return 0;
}