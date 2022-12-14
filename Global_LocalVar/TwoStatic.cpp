#include<bits/stdc++.h>
using namespace std;
void abc()
{
    static int s=10;
    ++s;
    cout<<s<<" ";
    {
        static int s=20;
        ++s;
        cout<<s<<endl;
    }
}
int main()
{
abc();
abc();
abc();
return 0;
}