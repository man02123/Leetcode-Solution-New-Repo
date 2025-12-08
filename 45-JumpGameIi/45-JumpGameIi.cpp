// Last updated: 08/12/2025, 17:40:32
class Solution {
public:

    int jump(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        return solve(nums,0,dp);
        
    }
    int solve(vector<int>& nums,int ind,vector<int> &dp){
        
        if(ind>=nums.size()-1)
            return 0;
        if(dp[ind]!=-1)
            return dp[ind];
        
        int res=INT_MAX-5;
        
        for(int i=ind+1;i<=ind+nums[ind];i++)
        {
        
            res=min(res,1+solve(nums,i,dp));
        }
        return dp[ind]=res;
        
    }
};