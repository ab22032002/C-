#define call(a,b) a##b
//## means Concatenation 
#include<bits/stdc++.h>
using namespace std;
int main()
{
int ab=200,i=90;
cout<<ab+call(a,b);
cout<<endl<<100*call(a,b);
return 0;
}
