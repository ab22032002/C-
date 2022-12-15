#include<stdlib.h>
#include<stdio.h>
int main()
{
    char c,*cc;
    int i;
    long l;
    float f;
    c='z';
    i=15;
    l = 77177;
    f=3.14;
    //cc = &c;
   cc = &c;
   printf("\n c=%c cc=%u ",*cc,cc);
   cc = &i;
   printf("\n c=%d cc=%u ",*cc,cc);
   cc = &l;
   printf("\n c=%ld cc=%u ",*cc,cc);
   cc = &f;
   printf("\n c=%f cc=%u ",*cc,cc);
   return 0;
}
