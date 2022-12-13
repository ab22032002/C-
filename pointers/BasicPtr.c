#include<stdio.h>
int main()
{
    int a =10;
    int *p;
    p=&a;
    printf("\n  the asddress of a = %u %u %u",&a,p,*(&p));
    printf("\n the address of the pointer is :%u",&p);
    printf("\n the value of a is :%d,%d,%d,%d ",a,*p,*(&a),**(&p));
    return 0;
}