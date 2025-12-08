// Last updated: 08/12/2025, 17:40:13
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid[0][0]==1)
            return 0;
        int n=obstacleGrid[0].size();
        int m=obstacleGrid.size();
         
        if (obstacleGrid[0][0] == 1 || obstacleGrid[m-1][n-1] == 1) {
            return 0;
        }
     
        long long dp[m][n];
         dp[0][0]=1;
        for(int i=1;i<m;i++)
        {
            if(dp[i-1][0]==0 || obstacleGrid[i][0]==1 )
               dp[i][0]=0;
            else
                dp[i][0]=1;
        }
         for(int j=1;j<n;j++)
        {
            if(dp[0][j-1]==0 || obstacleGrid[0][j]==1 )
               dp[0][j]=0;
            else
                dp[0][j]=1;
        }
        
        
        for(int i=1;i<m;i++)
            for(int j=1;j<n;j++)
            {
                if(obstacleGrid[i][j]==0)
                {
                    
                  dp[i][j]=dp[i-1][j]+dp[i][j-1];  
                }
                else
                    dp[i][j]=0;
                
            }
        
        
        return dp[m-1][n-1];
    }
};