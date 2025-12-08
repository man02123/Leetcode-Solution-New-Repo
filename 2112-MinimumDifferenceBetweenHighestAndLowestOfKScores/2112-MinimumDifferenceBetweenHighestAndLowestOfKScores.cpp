// Last updated: 08/12/2025, 17:29:55
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int res=INT_MAX;
        
        for(int i=0;i<=nums.size()-k;i++)
            res=min(res,(nums[i+k-1]-nums[i]));
        
        return res;
    }
    
};