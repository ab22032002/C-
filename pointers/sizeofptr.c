#include<stdio.h>

int main()
{   
    int ap =900;
    float ab =90.90;
    char x= 'x';
    int *a=&ap;
    float *p=&ab;
    char *c=&x;
    printf("\n the size of pointers are : %d %d %d ",sizeof(a),sizeof(p),sizeof(c));
    printf("\n  Due to 64 bit compiler the size of the pointer is always 64 bit");
    return 0;

}