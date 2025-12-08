// Last updated: 08/12/2025, 17:40:08
class Solution {
public:
    int dp[46];
    int climbStairs(int n) {
        memset(dp,-1,sizeof(dp));
        return solve(n);
    }
    int solve( int n){
        if( n < 0)return 0;
        if(n == 0)return 0;
        if(n == 1)return 1;
        if(n ==2)return 2;
        if(dp [n] !=-1)return dp[n];
        
        return dp[n] = solve(n-1) + solve(n-2);
    }
};