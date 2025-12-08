// Last updated: 08/12/2025, 17:29:01
class Solution {
public:
    int percentageLetter(string s, char letter) {
        unordered_map<char,int> mp;
        for(auto it:s)
            mp[it]++;
        
        return(mp[letter]*100)/s.size();
            
        
    }
};