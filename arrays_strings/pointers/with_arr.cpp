#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[10];
a[0]=900;
a[9]=1000;
cout<<"address of the first element is ::"<<a;
cout<<"\naddress of second and third element will be respectively :"<<a+1<<" "<<a+2<<" \n ";
// ++a; increment of the base address is not allowed in c++;
cout<<a[9]<<" "<<*(a+9)<<" "<<*(9+a)<<" "<<9[a];// all will print the same value:
return 0;
}