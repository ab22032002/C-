/*You are given two strings,  and , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

Output Format

In the first line print two space-separated integers, representing the length of  and  respectively.
In the second line print the string produced by concatenating  and  ().
In the third line print two strings separated by a space,  and .  and  are the same as  and , respectively, except that their first characters are swapped.

Sample Input

abcd
ef
Sample Output

4 2
abcdef
ebcd af*/
#include<bits/stdc++.h>
using namespace std;
int main()
{ string s1,s2,s;
  cout<<"enter your first string"<<endl;
  getline(cin,s1);
  //cin.ignore();
  cout<<"enter your second string"<<endl;
  getline(cin,s2);
  s= s1+s2;
  cout<<s1.size()<<" ";
  cout<<s2.size()<<endl;
  cout<<s<<endl;
  //string rev1,rev2;
 /* for(int i= s1.size()-1;i>=0;i--)
    rev1.push_back(s1[i]);
  for(int i= s2.size()-1;i>=0;i--)
    rev2.push_back(s2[i]);
    cout<<rev1<<" "<<rev2<<endl;
    */
   // just the first character of the inserted string get swapped 
 s[0] =s1[0];
 s1[0]=s2[0];
 s2[0]= s[0];
 cout<<s1<<" "<<s2;

 return 0;
}