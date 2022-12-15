// int SQR(int n)
// {
//     return n*n;
// }
// Evaluate then Replace:
//The Above code can be replaced just by writting the Small Macro it bydefault Returns:
#define SQR(n) (n*n)
// #define SQR(n) n*n has different Results:
#define SQR1(n) n*n
#include<bits/stdc++.h>
using namespace std;
int main()
{
int z;
// Replace then Evaluate
z = 144/SQR(12);
// Must include the Paranthesis in order to get the Results right way otherwise it'll Flow in Wrong Diresction as the Code Replaces the symbols
cout<<z<<endl;
int y;
y=SQR1(1+2+3+4);
cout<<"y="<<y<<endl;
//Replaced as 1+2+3+4*1+2+3+4
return 0;
}