#include<bits/stdc++.h>
using namespace std;
int main()
{ int i, sum=0, co = 0, marks;
 cout<<"enter your marks or enter minus -1value"<<endl;
 cin>>marks;
while( marks != -1)
 {
 sum +=marks;
 co++;
 cin>>marks;
 }
 float avg ;
 avg = sum/co;
 cout<<"your average is "<<avg<<endl;
 return 0;
}

