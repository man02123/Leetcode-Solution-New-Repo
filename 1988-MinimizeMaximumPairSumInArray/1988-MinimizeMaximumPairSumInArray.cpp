// Last updated: 08/12/2025, 17:30:29
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=nums.size()-1;
        int res=0;
        
        for(int i=0;i<(nums.size())/2;++i)
        {
            res=max(res,(nums[i]+nums[j--]));
            
        }
        return res;
    }
};