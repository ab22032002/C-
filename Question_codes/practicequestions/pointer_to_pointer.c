#include<stdlib.h>
#include<stdio.h>
void swap(int *cc,int *dd);
void exchange(int **cc,int*dd);
int main()
{
    int c=10,d=20;
    printf(" values before swapping c=%d d=%d",c,d);
    swap(&c,&d);
    printf(" values after swapping c=%d d=%d",c,d);
    return 0;
}
void swap(int *cc,int *dd)
{
    exchange(&cc,dd);
}
void exchange(int **cc,int*dd)
{
    int t;
    t=**cc;
    **cc=*dd;
    *dd=t;
}
