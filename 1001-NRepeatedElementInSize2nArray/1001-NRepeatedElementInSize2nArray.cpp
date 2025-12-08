// Last updated: 08/12/2025, 17:33:56
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> ump;
        int n=(nums.size()/2);
        
        for(auto it:nums)
            ump[it]++;
        for(auto it:ump)
        {
           if(it.second==n)
            return it.first; 
        }
        return 0;
            
        
    }
};