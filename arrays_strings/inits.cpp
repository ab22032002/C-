#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[2];
a[0]=90;
a[1]=89;
a[2]=890;
a[90]=90000;
cout<<a[2]<<" "<<a[1]<<" "<<a[90]; // there is no boundary checking in the C++ compiler: that's why this much of values also get inserted 
cout<<" "<<sizeof(a)/sizeof(a[90]); 
// cout<<" \n"<<sizeof(a);
return 0;
}