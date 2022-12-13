#include <bits/stdc++.h>
using namespace std;
int main() {
	int num;
	cin >> num; 
    while(num--)
    {
       int n=0,k=0;
       cin>>n>>k;
       int a[n];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
    
    int Min= INT_MAX;
    for(int i=0;i<n;i++)
       {
           Min=min(Min,a[i]);
       }
	   if(k>Min)
        {cout<<k-Min<<endl;}
		else 
		cout<<0<<endl;
    }
    // cout << "Input number is " << num << endl;	// Writing output to STDOUT
}
// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/micro-and-array-update/
