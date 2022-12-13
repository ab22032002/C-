#include<stdio.h>
int main()
{
    int a=90, b=12;
    int * const k=&a;
    ++a; // No error 
    ++(*k);// No error 
    // p=&b;// Error
    printf("\n %d",a);
}
