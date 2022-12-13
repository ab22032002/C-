#include<bits/stdc++.h>
using namespace std;\
int incr(int n)
{
    n++;
    return n;
}
int incr1(int &n)
{
    n++;
    return n;
}
int main()
{
   int a =90;
   cout<<incr(a)<<endl; // pass by value only so that it has the copy of the actual value 
   cout<<incr1(a)<<endl;
   cout<<incr1(a)<<endl;
   cout<<incr1(a)<<endl;
}
// pass by refernece changes in the actual value but in the case 
// passing actual won't let us change the actual values 