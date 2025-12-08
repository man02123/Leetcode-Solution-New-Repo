// Last updated: 08/12/2025, 17:37:42
class Solution {
public:
    int coinChange(vector<int>& c, int am) {
        vector<vector<int>>  dp(13 ,vector<int>(10001 , INT_MAX)  );

        int ans = recur(c , am , 0 , dp) ;
        return ans == 100001 ? -1 : ans;

    }
    int recur(vector<int>& c, int am , int ind , vector<vector<int>> &dp) {

        if(am < 0 || ind >= c.size()) return 100001;

        if(am == 0) return 0;
        if(dp[ind][am] != INT_MAX) return  dp[ind][am];

        int take = 1 + recur(c , am-c[ind] , ind+1 , dp);
        int nottake = recur(c , am , ind+1 , dp);
        int takeagain = 1+ recur(c , am-c[ind] , ind , dp);

        return dp[ind][am] = min({take , nottake , takeagain});
    }
};