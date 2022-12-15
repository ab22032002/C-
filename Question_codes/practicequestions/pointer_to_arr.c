#include<stdio.h>
void disp(int*);
void show(int**);
int main()
{
    int marks[5]={10,20,30,40,50};
    for(int i=0;i<5;i++)
        disp(&marks[i]);
    return 0;
}
void disp(int* n)
{
    //printf("%d\t",*n);
    show(&n);
}
void show(int**k)
{
    printf("%d\t",**k);
}
