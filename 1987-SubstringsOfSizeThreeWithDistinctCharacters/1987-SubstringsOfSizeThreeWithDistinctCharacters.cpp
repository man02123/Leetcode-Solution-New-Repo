// Last updated: 08/12/2025, 17:30:24
class Solution {
public:
    int countGoodSubstrings(string s) {
        unordered_map<char,int> mp;
        if(s.size()<=2)
            return 0;
       
        int count=0;
        
        
        
        
        for(int i=0;i<s.size()-2;i++)
        {
            
                if(s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i+2]!=s[i] )
                    count++;
        }
        return count;
    }
};