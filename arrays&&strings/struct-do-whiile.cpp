#include<bits/stdc++.h>
using namespace std;
struct emp
{
     int empid;
     float salary;
};
int cmtt;
int main()
{  string s;
   int j=1;
   do
   {
    cout<<"enter the employee name to be made for use"<<endl;
    cin>>s;
    struct emp s;
    cout<<"enter the empid"<<endl;
    cin>>s.empid;
    cout<<"enter the salary ";
    cin>>s.salary;
    cmtt++;
    cout<<"do you want to enter more press any key or to pause press -1"<<endl;
    cin>>j;
   }while(j>0);
   cout<<"the data entered is";

	return 0;
}
