#include<bits/stdc++.h>
using namespace std;
// declarign the global array at first place 
const int  N= 100;
long long fact[N];
fact[0]=fact[1]=1;
for(int i=0;i<N;i++)
{
    fact[i]=fact[i-1]*i;
}
int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cout<<"enter the value of the n"<<endl;
    cin>>n;
    cout<<fact[n]<<endl;
}
return 0;
}