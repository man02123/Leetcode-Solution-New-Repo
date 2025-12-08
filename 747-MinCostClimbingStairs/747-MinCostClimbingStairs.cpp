// Last updated: 08/12/2025, 17:35:13
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1,-1);
        
       return min(solve(cost,n-1,dp),solve(cost,n-2,dp));
        
    }
   int solve(vector<int>& cost,int n,vector<int> &dp)
   {
       if(n<0)
           return 0;
       if(n==0)
           return dp[n]=cost[0];
       if(n==1)
           return dp[n]=cost[1];
       if(dp[n]!=-1)
           return dp[n];
       else
           
       return dp[n]=cost[n]+min(solve(cost,n-1,dp),solve(cost,n-2,dp));
       
       
   }
    
};