// Last updated: 08/12/2025, 17:32:09
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> v;
        for(int i=0;i<nums.size();++i)
        {
            auto pos=v.begin()+index[i];
            v.insert(pos,nums[i]);
        }
        return v;
    }
};