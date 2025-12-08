// Last updated: 08/12/2025, 17:39:23
class Solution {
public:
    int minimumTotal(vector<vector<int>>& tri) {
        vector<vector<int>> dp(tri.size()+1 , vector<int>(tri.back().size() , INT_MAX));
        return solve(tri , 0 , 0 , 1 , dp);
    }
    int solve(vector<vector<int>>& tri , int row ,  int col , int level , vector<vector<int>>& dp) {
        if(row < 0 || row >= level || col < 0 || col>= tri[level-1].size()) return INT_MAX-10000;
        if(row == tri.size()-1) return tri[row][col];
        if(dp[row][col] != INT_MAX)return dp[row][col];

        int ans = tri[row][col] + min ({solve(tri  , row+1 , col , level+1 , dp) ,solve(tri  , row+1 , col+1 , level+1 , dp)  });
        return dp[row][col] = ans;
    }
};