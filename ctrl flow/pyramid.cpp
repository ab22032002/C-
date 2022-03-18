#include<bits/stdc++.h>
using namespace std;
int main()
{ int p,m,q,n;
  cout<<"enter number of lines"<<endl;
  cin>>n;
  for(p=1;p<=n;p++)
  {
      ///to print spaces
      for(q=1;q<=n-p; q++)
        cout<<"    ";
      /// to print numbers
      m = p;
      for(q=1; q<=p; q++)
      {
          cout.width(4);
          cout<<m++;
      }
      m=m-2;
      for(q=1;q<p;q++)
      {
         cout.width(4);
          cout<<m--;
      }
      cout<<endl;
  }
 return 0;
}

