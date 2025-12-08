// Last updated: 08/12/2025, 17:36:30
class Solution {
public:int dp[21][300001];
    int findTargetSumWays(vector<int>& n, int t) {
        memset(dp  , -1, sizeof(dp));

        return recur (n, t , 0);
    }
int recur (vector<int>& nums, int t , int ind) {

    if(t == 0 && ind == nums.size()) return 1;

    if(ind >= nums.size())return 0;
    if(dp[ind][t+200000] != -1) return dp[ind][t+200000];

    int letMinus = recur(nums , t+nums[ind] , ind+1);
    int letPlus = recur(nums , t-nums[ind] , ind+1);

    return dp[ind][t+200000] = letMinus + letPlus;
}
};