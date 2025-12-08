// Last updated: 08/12/2025, 17:38:45
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> mp;
        vector<int> v;
        for(int i=0;i<numbers.size();++i)
            mp[numbers[i]]=i;
        for(int i=0;i<numbers.size();++i)
        {
          int t=1*(target-numbers[i]);
            if(mp.find(t)!=mp.end())
            {
              v.push_back(i+1);
                v.push_back(mp[t]+1);
                return v;
            }
            
        
        }
        return v;
    }
};