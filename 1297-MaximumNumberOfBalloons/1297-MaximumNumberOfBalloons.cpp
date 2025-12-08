// Last updated: 08/12/2025, 17:33:00
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mp;
        for(auto it:text)
        {mp[it]++;}
        string s={"balloon"};
        int res=0;
        while(mp.size()!=0)
        {
            for(int i=0;i<s.size();++i)
            {
                if(mp[s[i]]>0)
                {
                    mp[s[i]]--;
                }
                else 
                    return res;
            }
            ++res;
            
            
        }
        return res;
        
    }
};