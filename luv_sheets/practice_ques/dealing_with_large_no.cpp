#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    // extracting as int 
   cout<< s[s.size()-1]<<endl;
   cout<<"ascii value of last_digit is :"<<(int)s[s.size()-1]<<endl;
   int last_digit;
   last_digit= s[s.size()-1]-'0';
   cout<<last_digit;
    return 0;
}