#include<bits/stdc++.h>
using namespace std;
int main()
{int y ;/// for year;
cout<<"enter the year you wanna check to be leap or not ";
 cin>>y;
 if((y%4==0&&y%100!=0 )|| (y%400==0) )
    cout<<y<<"is a leap year ";
 else
    cout<<y<<"its not a leap year";
 return 0;
}
