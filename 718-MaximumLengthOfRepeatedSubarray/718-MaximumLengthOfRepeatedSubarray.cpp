// Last updated: 08/12/2025, 17:35:24
class Solution {
public:
    int dp[1001][1001];
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        memset(dp,0,sizeof(dp));
//         for(int i=0;i<m+1;i++)
//             for(int j=0;j<n+1;j++)
//             {
                
//             }
        int ans =0;
      for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
               if(nums1[i]==nums2[j])
               {if(i==0 || j==0)
                    dp[i][j]=1;
                else
                   dp[i][j]=1+dp[i-1][j-1];
               }
               ans=max(ans,dp[i][j]);
            }
        return ans;
    }
};