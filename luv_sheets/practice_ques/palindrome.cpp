#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s1,str_rev;
    cout<<"Enter a StrinG"<<endl;
    cin>>s1;
    for(int i=s1.size()-1;i>=0;--i)
    {
        str_rev.push_back(s1[i]);
    }
    if(s1==str_rev)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO";
    }
    return 0;
}
/***
 string reverseWord(string str)
{ 
    string rev2;

for(int i= str.size()-1;i>=0;i--)
    rev2.push_back(str[i]);
    cout<<rev2;
    
  //Your code here
}*/
// reversing a string 