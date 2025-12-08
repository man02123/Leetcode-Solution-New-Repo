// Last updated: 08/12/2025, 17:35:59
class Solution {
public:
    int minDistance(string word1, string word2) {
        int m=word1.length();
           int n=word2.length();
        int dp[m+1][n+1];
        
        for(int i=0;i<m+1;i++)
            for(int j=0;j<n+1;j++)
            {
                if(i==0 || j==0)
                    dp[i][j]=0;
            }
        
        for(int i=1;i<m+1;i++)
            for(int j=1;j<n+1;j++)
            {
             if(word1[i-1]==word2[j-1])
                 dp[i][j]=dp[i-1][j-1]+1;
                
                else 
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                
                
            }
        return m+n-2*dp[m][n];
        
        
    }
};