// Last updated: 08/12/2025, 17:30:14
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(begin(nums),end(nums));
        return ((nums.back()*nums[nums.size()-2]) - (nums[0]*nums[1]) );
    }
};