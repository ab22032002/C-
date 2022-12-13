#include<bits/stdc++.h>
using namespace std;
int main()
{
 float c,f;
 cout<<"enter temperature in  celsius "<<endl;
 cin>>c;
 f= 1.8*c +32;
 cout<<"equivalent farenheit ="<<f<<endl;
 cout<<"enter the temperature in farenheit";
 cin>>f;
 c=(f-32)/1.8;
 cout<<"equivalent temperature in celcious"<<c;
 return 0;
}
