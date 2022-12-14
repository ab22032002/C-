#include<stdio.h>
void abc()
{
    auto int a=0;
    register int b=0;
    static int c=0;
    ++a;
    ++b;
    ++c;
    printf("%d,%d,%d\n",a,b,c);
}
int main()
{
abc();
abc();
abc();
return 0;
}
// auto modifirs isn't run inside the C++ Program:
// every time function get called off the memory allocated to it gets desstroyed in case of and register type of data: