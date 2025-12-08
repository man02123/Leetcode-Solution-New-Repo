// Last updated: 08/12/2025, 17:40:00
class Solution {
    vector<vector<int>> ans;
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> dummy;
        helper(nums ,  0 , dummy);
        return ans;
    }
    void helper( vector<int>& nums ,  int index , vector<int> &dummy){

        if(index >= nums.size()) {
            ans.push_back(dummy);
            return;
        }
        
        dummy.push_back(nums[index]);
        helper(nums, index+1 , dummy);
        dummy.pop_back();
        helper(nums, index+1 , dummy);

    }
};