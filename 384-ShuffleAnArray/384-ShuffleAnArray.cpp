// Last updated: 08/12/2025, 17:37:17
class Solution {
public:vector<int> act;
    vector<int>sfl;
    Solution(vector<int>& nums) {
       act=nums; 
        sfl=nums;
    }
    
    vector<int> reset() {
       
        return act;
    }
    
    vector<int> shuffle() {
        next_permutation(sfl.begin(),sfl.end());
        return sfl;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */