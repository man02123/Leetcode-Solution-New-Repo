// Last updated: 08/12/2025, 17:28:36
class Solution {
public:
    int minimumRecolors(string s, int k) {
        unordered_map<char,int> mp;
        int j=0;
        while(j<s.size() && j<k)
            mp[s[j++]]++;
        int mn=mp['W'];
        
        for(int i=0;i+k<s.size();i++)
        {
            mp[s[i+k]]++;
            mp[s[i]]--;
           // if(mp['W']==0)mp.erase('W');
            mn=min(mp['W'],mn);
        }
        return mn;
        
    }
};