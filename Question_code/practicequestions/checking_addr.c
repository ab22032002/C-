#include<stdlib.h>
#include<stdio.h>
int main()
{
    int b=100;
    int *c=&b;
    printf("%u\n",c);
    //&b=100;
     // *c=1000;
    printf("%u\n",&b);
    printf("%u\n",c);
    c=7300;
    printf("%u \n ",*c);
    return 0;
}
