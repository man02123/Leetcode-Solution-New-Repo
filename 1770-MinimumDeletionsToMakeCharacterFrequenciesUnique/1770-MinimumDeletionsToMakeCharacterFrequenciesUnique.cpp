// Last updated: 08/12/2025, 17:31:05
class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> mp;
            for(auto it:s)
                mp[it]++;
        set<int> k;
        int count=0;
        for(auto it:mp)
        {
           if(k.find(it.second)==k.end())
               k.insert(it.second);
            
            else
            {
                while((k.find(it.second)!=k.end() && it.second!=0 ))
                {
                    --it.second;
                    ++count;
                }
                if(it.second!=0)
                    k.insert(it.second);
            }
            
        }
        return count;
       
    }
};