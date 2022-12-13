#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string s1,s2;
    int t=0;
    // int a=800;
    // cout<<a<<endl;
    // cout<<"hEllo main"<<endl;
    cin>>t;
    while(t--)
{   
    int k = 0;
    // cout<<"enter your string s1"<<endl;
    cin>>s1;
    // cout<<"enter your string s2"<<endl;
    cin>>s2;
    for(int i=0; i<s2.size();i++)
    {
        for(int j=0; j<s1.size();j++)
        {
            if(s2[i]==s1[j])
            {
               k++;
               break;
            }
        }
    }
    cout<<k<<endl;
   }
    return 0;
}
// https://www.codechef.com/problems/STONES 
// submitted successfully 