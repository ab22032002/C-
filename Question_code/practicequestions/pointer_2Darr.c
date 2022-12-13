#include<stdio.h>
//#include<alloc.h>
void disp(int*,int,int);
void show(int(*)[4],int ,int );
void print(int [][4],int,int);
int main()
{
    int a[3][4]={{1,2,3,4},
                 {5,6,7,8},
                 {9,0,1,2}};
    for(int i=0;i<3;i++)
    {
        printf("the addr of the rows are :%u\n",a[i]);
    }
    for(int i=0;i<3;i++)
    {
        printf("show the base addr from *(a+%d)--> %u\n",i,*(a+i));
        for(int j=0;j<4;j++)
        {
            printf("show the values at different places %d::\n",*(*(a+i)+j));
        }
    }
    disp(a,3,4);
    printf("\n\n\n Calling The Function :Show()\n");
    show(a,3,4);
    printf("calling the print Function::\n");
    print(a,3,4);
    return 0;
}
void disp(int*q,int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            printf("%d",*(q+i*col+j));
    }
}
void show(int(*q)[4],int row,int col)
{
    int i,j;
    int *p; /// Normal array declaration:
    for(i=0;i<row;i++)
    {
        p=q+i;/// jumps to the next 1D array:::
        for(j=0;j<col;j++)
        {
            printf("%d\t",*(p+j));
        }
        printf("\n");
    }
}
void print(int x[][4],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            printf("%d\t",x[i][j]);
    }
    printf("\n");
}
