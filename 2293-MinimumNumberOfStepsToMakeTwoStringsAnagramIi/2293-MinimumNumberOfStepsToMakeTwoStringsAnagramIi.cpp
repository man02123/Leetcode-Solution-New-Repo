// Last updated: 08/12/2025, 17:29:14
class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> mp;
        
        for(auto it:s)
            mp[it]++;
        
        int count=0;
        for(int i=0;i<t.size();i++)
        {
            if(mp.find(t[i])!=mp.end())
            { 
                mp[t[i]]--;
                if(mp[t[i]]==0)mp.erase(t[i]);
            }
            else 
                count++;
        }
        int cnt=0;
        for(auto it:mp)
            cnt+=it.second;
        
     
        return cnt+count;
        
    }
};