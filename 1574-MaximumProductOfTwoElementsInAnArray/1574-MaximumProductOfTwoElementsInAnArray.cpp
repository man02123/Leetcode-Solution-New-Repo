// Last updated: 08/12/2025, 17:31:53
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(begin(nums),end(nums));
        
        return (nums[nums.size()-2]-1)*(nums.back()-1);
    }
};