// Last updated: 08/12/2025, 17:36:59
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(auto it: nums)sum+=it;

        vector<vector<int>> dp(nums.size() , vector<int>(sum+1 , -1));   

        if(sum % 2) return false;
        return solve(nums ,  sum/2 , 0 , dp) ;
    }
    bool solve(vector<int>& nums ,  int sum , int ind , vector<vector<int>> &dp) {
        if(sum == 0) return true;

        if(sum < 0 || ind >= nums.size()) return false;
        if(dp[ind][sum] != -1 ) return dp[ind][sum];
        bool ans = false;

        ans |= solve(nums, sum-nums[ind] ,ind+1   ,dp);
        ans |= solve(nums, sum ,ind+1  , dp );

        return dp[ind][sum] = ans;

    } 
};