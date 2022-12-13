#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
long long hs[N];// globally declared the hash array
int main()
{
int n;
cin>>n;
int a[n];
for(int i=1;i<=n;i++)
{
    cin>>a[i];
}
int sum=0;
// cout<<a[n];
// computation starts here 
for(int i=1;i<n;i++)
{
    for(int j=i+1;j<=n;j++)
    {
       sum = a[i]+a[j];
       hs[sum]++;
    //    cout<<hs[sum];
    }
}
int t;
cout<<"enter the value of t"<<endl;
cin>>t;
while(t--)
{   
    int k;
    cout<<"enter the value to be found as sum:"<<endl;
    cin>>k;
    if(hs[k]>=1)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
}
return 0;
}
// SUBMITTED CODE/
/*
#include<bits/stdc++.h>
using namespace std;
const int N=1e7;
long long hs[N];// globally declared the hash array
int main()
{
int n;
cin>>n;
int k;
cin>>k;
int a[n];
for(int i=1;i<=n;i++)
{
    cin>>a[i];
}
int sum=0;
// cout<<a[n];
// computation starts here 
for(int i=1;i<n;i++)
{
    for(int j=i+1;j<=n;j++)
    {
       sum = a[i]+a[j];
       hs[sum]++;
    //    cout<<hs[sum];
    }
}
// int t;
// // cout<<"enter the value of t"<<endl;
// cin>>t;
// while(t--)
// {   
    // int k;
    // // cout<<"enter the value to be found as sum:"<<endl;
    // cin>>k;
    if(hs[k]>=1)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
// }
return 0;
}
*/