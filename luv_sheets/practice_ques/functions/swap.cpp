#include<bits/stdc++.h>
using namespace std;
void swap1(int a,int b)
{
    int temp;
    a=temp;
    temp=b;
    b=a;
}
void swap2(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{  cout<<"enter the values of a and b"<<endl;
    int a,b;
   cin>>a>>b; 
//    cout<<swap1(a,b);
   swap1(a,b); // this wont work as reference variable is not passed 
   cout<<"a= "<<a<<"\t "<<"b= "<<b<<endl;
   swap2(a,b);
   cout<<"a= "<<a<<"\t "<<"b= "<<b<<endl;
   swap(a,b);
   cout<<"a= "<<a<<"\t "<<"b= "<<b<<endl;
   return 0;
}
/*** swap(x,y)  a prebuilt function in c++ 
 * max(x,y)
 * min(x,y)
 * */