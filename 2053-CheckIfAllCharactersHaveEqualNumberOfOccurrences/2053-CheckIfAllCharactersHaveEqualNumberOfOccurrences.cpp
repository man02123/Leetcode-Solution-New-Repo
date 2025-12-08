// Last updated: 08/12/2025, 17:30:07
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map <int,int> mp;
        for(auto it:s) 
            mp[it]++;
        int k=mp[s[0]];
        for(auto it:mp) 
            {
            if(it.second!=k) 
                return 0;
        }
        return 1;
        
    }
};