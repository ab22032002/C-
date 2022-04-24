// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     cout<<"hello"<<endl;
//     string str="this is me";
//     cout<<str<<endl;
//     cout<<str.size();
//     return 0 ;
// }
/*   THIS IS THE CODE FOR CHECKING STRING REVERSE 
#include<bits/stdc++.h>
using namespace std;
int main()
{ string str,rev;
  cout<<"enter your string"<<endl;
  getline(cin,str);
  for(int i= str.size()-1;i>=0;i--)
    rev=rev+str[i];
  cout<<rev<<endl;
  if(str==rev)
  {
      cout<<"yes";
  }
 else
 cout<<"no";
 return 0;
}
*/
// #include<bits/stdc++.h>                                                                   
#include<iostream>
using namespace std;
int main()
{  
    cout<<"enter the value of the n ";
    int k,count,n;
    cin>>k;
    n=k/2; 
    for(int i=1;i<=n/2;i++)
     {
         for(int j=n/2+1;j<=n;j++)
         {
             if((i+j)==n &&(i!=j))
             {
                 count++;
             }

         }
     }
     cout<<count;
    return 0;
}
// https://codeforces.com/problemset/problem/610/A
// time limit exceeded although the code is running very rightly 