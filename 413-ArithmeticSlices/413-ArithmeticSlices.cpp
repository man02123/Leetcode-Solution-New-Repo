// Last updated: 08/12/2025, 17:37:01
class Solution {
public:
     int dp[5000+1];
    int numberOfArithmeticSlices(vector<int>& nums) {
       
        memset(dp,0,sizeof(dp));
        
      return solve(nums);
        
    }
    int solve(vector<int>& nums)
    {
        int n=nums.size();
       
        if(n<3)
            return 0;
        
        if(n==3 )
        {
            if((nums[2]-nums[1])==(nums[1]-nums[0] ))
        {
            return dp[2]=1;
        }
        } 
        
        int ans =0;
        for(int i=2;i<nums.size();i++)
        {
            
            
         if((nums[i]-nums[i-1])==(nums[i-1]-nums[i-2]))
                  
            {
                dp[i]=dp[i-1]+1;
              
            }
            
            ans=ans+dp[i];
        }
        return ans;
    }
};