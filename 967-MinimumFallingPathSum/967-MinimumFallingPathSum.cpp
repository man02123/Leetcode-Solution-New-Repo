// Last updated: 08/12/2025, 17:34:11
class Solution {
public: 
    int minFallingPathSum(vector<vector<int>>& mat) {
        vector<vector<int>> dp(101,vector<int>(101,INT_MAX));

        int m = mat.size();
        int n = mat[0].size();
        int ans = 1000001;
        for(int i =0 ;i <n;i++){
            ans = min(ans , solve(mat , 0,i, dp));
        }
        return ans;
        
    }
    int solve(vector<vector<int>>& mat , int row ,  int col ,vector<vector<int>>& dp ){
         int m = mat.size();
        int n = mat[0].size();
        

        if(row >= m || col>= n || row<0 || col<0) return 100001;

        if(row == m-1  && (col>=0 && col<= n-1)) return mat[row][col];
        //cout<< dp[row][col];

        if(dp[row][col] != INT_MAX) return dp[row][col];

        int ans = INT_MAX;

         ans = mat[row][col] + min({solve(mat , row+1 , col , dp) , solve(mat , row+1 , col+1 , dp) ,solve(mat , row+1 , col-1 , dp )});

         dp[row][col] = ans;
         return ans;
    }
};