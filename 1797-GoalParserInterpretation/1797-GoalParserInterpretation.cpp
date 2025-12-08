// Last updated: 08/12/2025, 17:30:59
class Solution {
public:
    string interpret(string s) {
        int start=0;
        int end=0;
        string res="";
        while(end<s.size())
        {
            end=start;
            
            if(s[start]=='(')
            {
                while(s[end]!=')')end++;
                 if(end-start>1)
                 res+=s.substr(start+1,(end-1-start));
                 else res.push_back('o');
                start=end;
            }
            else
            {
                res.push_back(s[start]);
            }
            
            start++;
            
        }
        res.pop_back();
        
        return res;
        
        
    }
};