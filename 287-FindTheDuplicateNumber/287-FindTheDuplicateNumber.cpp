// Last updated: 08/12/2025, 17:37:53
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();++i)
        {
            if(nums[i]==nums[i+1])
            {
                return nums[i];
            }
        }
            return 0;
        
    }
};