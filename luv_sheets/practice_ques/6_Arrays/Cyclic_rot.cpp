#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=a[n-1];
    for(int i=0;i<n-1;i++)
    {
        a[n-(1+i)]=a[n-(2+i)];
    }
    a[0]=l;
    // Array output 
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

// https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1