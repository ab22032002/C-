#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    // cin>>s;
    getline(cin,s); // the benefit of having string's getline functions 
    // cursor jaha hai vaha se input lena chalu kr deta hai 
    // ager kam na kre toh cin.ignore() // use krke dekho 
    cout<<s;
    int t ;
    cin>>t;
    // cin.ignore(); iske bina agar t = 2 dale ho to wo ek baar hi kaam krega 
    while(t--)
    {
        string s1;
        getline(cin,s1);
        cout<<s1<<endl;
    }
    return 0;
}