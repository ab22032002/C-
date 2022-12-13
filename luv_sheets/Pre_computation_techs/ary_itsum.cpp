#include<bits/stdc++.h>
using namespace std;
const int  N = 1e5+10;
int a[N]; // globally declared the array 
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      cin>>a[i];
  }
  // for the number of Queries :
  int q;
  cin>>q;
  while(q--)
  {
      int l,r;
      cin>>l>>r;
      long long sum=0;
      for(int i=l;i<=r;i++)
      {
          sum+=a[i];
      }
      cout<<sum<<endl;
  }
return 0;
}
// finding the sum of the numbers among the numbers of the array 
// N=1e5 ,Q=1e5;