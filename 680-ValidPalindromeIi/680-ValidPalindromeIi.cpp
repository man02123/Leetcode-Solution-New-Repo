// Last updated: 08/12/2025, 17:35:34
class Solution {
public:
    bool validPalindrome(string s) {
        
        int start=0;
        int end=s.size()-1;
        
        int del=0;
        
       
        
      return isvalid(s,start,end,0);  
    }
    bool isvalid(string &s,int start,int end,int del)
    {
        if(del>1)return false;
        if(start>=end && del<=1)return true;
        
        if(start <end && s[start]==s[end])
            return isvalid(s,start+1,end-1,del);

        else
       return isvalid(s,start+1,end,del+1)||isvalid(s,start,end-1,del+1);
         
               
       }
               
    
};