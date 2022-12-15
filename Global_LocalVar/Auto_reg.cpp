#include<bits/stdc++.h>
using namespace std;
void abc()
{
    auto int a=0;
    register int b=0;
    static int c=0;
    ++a;
    ++b;
    ++c;
    cout<<a<<" "<<b<<" "<<c<<endl;
}
int main()
{
abc();
abc();
abc();
return 0;
}