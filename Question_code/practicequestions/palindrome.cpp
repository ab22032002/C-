#include<bits/stdc++.h>
using namespace std;
int main()
{ string str,rev;
  cout<<"enter your string"<<endl;
  getline(cin,str);
  for(int i= str.size()-1;i>=0;i--)
    rev=rev+str[i];
  cout<<rev<<endl;
  if(str==rev)
  {
      cout<<"yes";
  }
 else
 cout<<"no";
 return 0;
}

