// Last updated: 08/12/2025, 17:35:47
class Solution {
public:
//     static bool cmp(vector<int> a,vector<int> b)
//     {
//         return a[1]<b[1];
        
//     }
    int findLongestChain(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> dp(nums.size(),1);
        
        int curr=1;
       
        
     for(int i=1;i<nums.size();i++)
     {
         for(int j=0;j<i;j++)
         {
             if(nums[i][0]>nums[j][1] && dp[i]<dp[j]+1)
             { 
                 dp[i]=dp[j]+1;
              curr=max(curr,dp[i]);
             }
         }
     }
        
       return curr; 
    }
};