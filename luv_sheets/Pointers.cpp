#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int x=90;
    int *p_x=&x; // first pointer 
    cout<<"addr of x: "<<&x<<endl;
    cout<<"addr by pointer " <<p_x<<endl;
    cout<<"Value  by pointer " <<*p_x<<endl;
    cout<<"addr+1 by pointer " <<p_x +6 <<endl;
    cout<<"it will print any garbage value "<<*p_x+1<<endl;
    int **p_p_x=&p_x;
    cout<<"addr of pointer  " <<&p_x<<endl;
    cout<<"addr by pointer" <<p_p_x<<endl;
    cout<<"addr by pointer" <<**p_p_x<<endl;
    cout<<"addr by pointer" <<*p_p_x<<endl;
}