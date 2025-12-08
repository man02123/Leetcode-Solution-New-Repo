// Last updated: 08/12/2025, 17:35:18
class Solution {
public:
    string toLowerCase(string s) {
       // string k=to_lower(s);
        for(int i=0;i<s.size();++i)
        {
            int t=s[i];
            if(t>=65 && t<=90)
            
            {
                t=t+32;
                s[i]=t;
            }
            
        }
        return s;
        
        
    }
};