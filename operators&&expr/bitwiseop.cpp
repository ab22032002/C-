#include<bits/stdc++.h>
using namespace std;
int main()
{ int w,x,y,z,k,l;
  w=10;
  x=11;
   x= w>>3;
   y= w<<3;
   cout<<" w= "<<w<<endl;
   cout<<" x= "<<x<<endl<<" check the right shift operator \n";
   cout<<" y= "<<y<<endl<<"check if the bitwise left shift to the given variable \n";
   k = w&x;
   cout<<"the value after and operation on w and x   "<<k<<endl;
   l = w|x;
   cout<<"the value after or operation on w and x   "<<l<<endl;
 return 0;
}

