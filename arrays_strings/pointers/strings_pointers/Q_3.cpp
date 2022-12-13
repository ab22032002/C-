#include<bits/stdc++.h>
using namespace std;
int main()
{
char s[]="C is a Philosophy of life";
char t[50];
char *ss=s;
char *tt=t;
while(*ss)
{
    *tt++=*ss++;
}
*tt='\0';
cout<<t;
cout<<endl;
cout<<"its almost like the strcpy function : \n";
return 0;
}