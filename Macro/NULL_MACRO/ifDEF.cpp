#define GATE
#include<bits/stdc++.h>
using namespace std;
int main()
{
cout<<"a";
cout<<"b";
#ifdef GATE  // Already its Defined
 cout<<"x";
 cout<<"y";
#endif
#ifdef Gate // its not defined 
cout<<"this is also defined";
cout<<endl;
#endif
return 0;
}