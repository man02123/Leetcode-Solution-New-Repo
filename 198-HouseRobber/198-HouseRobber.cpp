// Last updated: 08/12/2025, 17:38:36
class Solution {
public:int dp[101];
    int rob(vector<int>& nums) {
        memset(dp , -1,sizeof(dp));
        return solve(nums , nums.size()-1);
    }
    int solve(vector<int>& nums  ,  int indx ) {
        if(indx < 0 )return 0;
        if(indx == 0) return nums[indx];
        if(dp[indx] != -1)return dp[indx] ;
        int ans = 0 ;
        ans = max(nums[indx] + solve(nums,indx-2) , solve(nums,indx-1));
        dp[indx] = ans;
        return ans;
    }
};