// Last updated: 08/12/2025, 17:33:07
class Solution {
public:
      
     int solve(int n,vector<int> &dp)
    {
         if(n<=1)
             return n;
         if(n==2)
             return 1;
        if(dp[n]!=-1)
            return dp[n];
     
            return dp[n]=solve(n-1,dp)+solve(n-2,dp)+solve(n-3,dp);
     
    }
    
    int tribonacci(int n) {
         vector<int> dp(n+1,-1);

      return solve(n,dp);
    }

};


  