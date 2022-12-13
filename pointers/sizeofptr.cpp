#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int ap =900;
    float ab =90.90;
    char x= 'x';
    int *a=&ap;
    float *p=&ab;
    char *c=&x;
    cout<<sizeof(a)<<sizeof(p)<<sizeof(c);
    return 0;

}