#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a =1;
 int *p;
 int **q;
 p=&a;
 q=&p;
 ++a;
 ++*p;
 ++**q;
 a*=2;
 cout<<a-*p+**q;
return 0;
}