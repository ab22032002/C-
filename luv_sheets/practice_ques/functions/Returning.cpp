#include<bits/stdc++.h>
using namespace std;
int sum(int a, int b)
{
    int result = a+b;
    return result;
}
int digit_sum(int x)
{
    int digit_sum=0;
    while(x)
    {
        digit_sum+= x%10;
        x=x/10;
    }
    return digit_sum;
}
int main()
{   int s1,s2,s3;
    cout<<"this is sum mennu \n";
    cin>>s1>>s2;
    cout<<sum(digit_sum(s1),digit_sum(s2));
    return 0;
    // return 0 isn't mandatory here the excecution of the program returns 0
    return 0 // actually making the program return from there 
}