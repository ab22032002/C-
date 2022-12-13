#include<stdio.h>
int main()
{
int const a=90;
int *p;
p=&a;
printf("%d\n",++*p);
printf("%d",a);
//  If we Even Dont Want it get updated through the Pointers: 
/// Const int *p // Ptr is a constant integer pointer: 
/// int const *p; // p is an integer constant pointer
return 0;
}