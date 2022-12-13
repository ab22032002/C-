// https://leetcode.com/problems/goal-parser-interpretation/submissions/
class Solution {
public:
    string interpret(string command) 
    {
        for(int i = 0 ;i<command.size();i++)
        {
            if(command[i]=='G')
            {
                return "G";
            }
            else if(command[i]=='(')
            {
                if(command[i+1]==')')
                {
                    
                    return "o";
                }
                else if(command[i+1]=='a')
                { 
                  if(command[i+2]=='l')
                  {
                      return "al";
                  }
                }
            }
        }
    }
};