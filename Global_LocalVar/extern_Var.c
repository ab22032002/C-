#include<stdio.h>
int main()
{
// searching of variable externally not only upside but Downside the  main function :
extern int a;
printf("%d\n",a);
// printf("%d",b); shows the error : as its not defined as Extern so it'll search the variable in scope and globally but not externally 
return 0;
}
int a =100;
int b=100;