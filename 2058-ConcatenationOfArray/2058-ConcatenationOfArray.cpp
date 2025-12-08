// Last updated: 08/12/2025, 17:30:06
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        nums.resize( 2*n);
        for(int i = 0; i < n; i++){
            nums[n + i] = nums[i];
        }
        return nums;
    }
};