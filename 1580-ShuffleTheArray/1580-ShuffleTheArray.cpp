// Last updated: 08/12/2025, 17:31:51
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;
        int j=n;
        while(j<nums.size())
        {
            res.push_back(nums[j-n]);
            res.push_back(nums[j]);
            j++;
        }
        return res;
    }
};