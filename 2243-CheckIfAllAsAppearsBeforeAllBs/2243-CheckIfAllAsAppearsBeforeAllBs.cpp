// Last updated: 08/12/2025, 17:29:28
class Solution {
public:
    bool checkString(string s) {
        int i=0;
        for(i=0;i<s.size();++i)
        {
            if(s[i]!='b')
                continue;
            break;
            
        }
        while(i<s.size())
        {
           if(s[i++]=='a')
               return false;
        }
        return true;
            
        
    }
};