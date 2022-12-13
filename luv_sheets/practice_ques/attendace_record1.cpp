// https://leetcode.com/problems/student-attendance-record-i/submissions/
class Solution {
public:
    bool checkRecord(string s) {
        int a =0,l=0;
        for(int i=0;i<s.size();i++)
   {
       if(s[i]=='A')
       {
           a++;
       }
       else if(s[i]=='L')
       {
           if( (s[i+1]=='L')&& (s[i+2]=='L') )
           {
               l=3;
           }
       }
   }
   if(a<2&&l<3)
   {
       return true;
   }
   else
   {
      return false;
   }
    }
};
// submitted successfully 