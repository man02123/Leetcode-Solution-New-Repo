// Last updated: 08/12/2025, 17:35:15
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> v=nums;
        sort(nums.begin(),nums.end());
        //int n=nums.size();
        
        if(nums[nums.size()-2]*2<=nums[nums.size()-1])
        {
            for(int i=0;i<nums.size();++i)
                if(nums[nums.size()-1]==v[i])
                    return i;
        }
        
        return -1;
        
     }
};