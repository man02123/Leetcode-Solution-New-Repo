// Last updated: 08/12/2025, 17:29:09
class Solution {
public:
    int triangularSum(vector<int>& nums) {
        if(nums.size()==2)
            return (nums[0]+nums[1])%10;
        if(nums.size()==1)
            return (nums[0])%10;
        int n=nums.size();
        while(n!=0)
        {
           
            for(int i=0;i<n-1;++i)
            {
                nums[i]=(nums[i]+nums[i+1])%10;
                
            
            }
            n--;
            
           
        }
        return (nums[0])%10;
        
    }
};