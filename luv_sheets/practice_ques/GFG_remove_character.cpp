// Given two strings string1 and string2, remove those characters from first string(string1) which are present in second string(string2). Both the strings are different and contain only lowercase characters.
// NOTE: Size of  first string is always greater than the size of  second string( |string1| > |string2|).
 

// Example 1:

// Input:
// string1 = "computer"
// string2 = "cat"
// Output: "ompuer"
// Explanation: After removing characters(c, a, t)
// from string1 we get "ompuer".
// Example 2:

// Input:
// string1 = "occurrence"
// string2 = "car"
// Output: "ouene"
// Explanation: After removing characters
// (c, a, r) from string1 we get "ouene".
 

// Your Task:  
// You dont need to read input or print anything. Complete the function removeChars() which takes string1 and string2 as input parameter and returns the result string after removing characters from string2  from string1.
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string removeChars(string string1, string string2) {
        // code here
    for(int i=0;i<string2.size();i++)
   {
       int j =0;
       while(j<string1.size())
       {
           if(string2[i]==string1[j])
           {
               for(int k=j;k<string1.size();k++)
                string1[k]=string1[k+1]; /// shifting
           }
           else
           {
               j++;
           }
       }
   }

   cout<<string1;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string string1,string2;
        cin>>string1;
        cin>>string2;
        Solution ob;
        cout<<ob.removeChars(string1,string2)<<endl;
    }
    return 0;
}
//https://practice.geeksforgeeks.org/problems/remove-character3815/1#