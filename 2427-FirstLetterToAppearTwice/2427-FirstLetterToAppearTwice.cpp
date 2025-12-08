// Last updated: 08/12/2025, 17:28:48
class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();++i)
        {
            mp[s[i]]++;
            if(mp[s[i]]>1)
                return s[i];
        }
        return s[0];
        
    }
};