// Last updated: 09/12/2025, 23:21:52
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> ans;
        sort(begin(nums),end(nums));
        
        for(int i =1;i<nums.size();i+=2){
            ans.push_back(nums[i]);
            ans.push_back(nums[i-1]);
        }
        return ans;
    }
};