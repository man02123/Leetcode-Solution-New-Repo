// Last updated: 08/12/2025, 17:34:14
class Solution {
public:
    int minAddToMakeValid(string s) {
   
        int left=0;
        int  right=0;
       
     for(int i=0;i<s.size();++i)
     {
         if(s[i]=='(')++right;
         else if(right>0)--right;
         else
             ++left;
        
     }

      return left+right;  
        
 
    }
};