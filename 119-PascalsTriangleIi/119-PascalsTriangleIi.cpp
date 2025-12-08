// Last updated: 08/12/2025, 17:39:24
class Solution {
public:
    int dp[34][34];
    vector<int> getRow(int rowIndex) {
     memset(dp,0,sizeof(dp));
        
        for(int i=0;i< rowIndex+1;i++)
            for(int j=0;j<rowIndex+1;j++)
            {
                if(i==j)
                    dp[i][j]=1;
               else if(j==0)
                    dp[i][j]=1;
                else if(j>i)
                    dp[i][j]=0;
                else
                    dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
            }
        vector<int> v;
        
        for(int j=0;j<rowIndex+1;j++)
        {
            v.push_back(dp[rowIndex][j]);
        }
        return v;
    }
};