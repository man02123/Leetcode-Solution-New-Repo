// Last updated: 08/12/2025, 17:36:22
class Solution {
public:int dp[301][50002];
    int change(int am, vector<int>& c) {
        memset(dp , -1,sizeof(dp));
        int ans = recur(am , c , 0);
        return ans;
    }

    int recur(int am, vector<int>& c , int ind) {

        if(am == 0)return 1;

        if(am < 0 || ind >= c.size()) return 0;

        if(dp[ind][am] != -1) return dp[ind][am];

        int ans = recur(am , c , ind+1) + recur(am-c[ind] , c , ind);

        return dp[ind][am] = ans;
    }
};