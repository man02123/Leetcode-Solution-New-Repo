// Last updated: 08/12/2025, 17:37:21
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target+1,-1);
        return solve(nums,target,dp);
        
    }
    int solve(vector<int>& nums,int t,vector<int> &dp){
        
        if(t<0)
            return 0;
        if(t==0)
            return dp[t]=1;
        if(dp[t]!=-1)
            return dp[t];
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
         res+=solve(nums,t-nums[i],dp);   
        }
        return dp[t]=res;
        
    }
   
};