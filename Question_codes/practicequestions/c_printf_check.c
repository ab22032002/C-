#include<stdio.h>
int main()
{
    int a=65;
    printf("%d,%d,%d\n",a,a,a=90);
    printf("%d,%d,%d\n",a=9,a,a=90);
    printf("%d,%d,%d\n",a=8,a=900,a=90);
    return 0;
}
