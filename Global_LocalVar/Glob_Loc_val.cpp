#include<bits/stdc++.h>
using namespace std;
int main()
{
int a=10;
{
     a=20;
    {   
        int a=30;
        cout<<a<<endl;
    }
    cout<<a<<endl;
}
cout<<a<<endl;
return 0;
}
// the value get updated of the main scopped as it permitted the access to all the function for // WRX