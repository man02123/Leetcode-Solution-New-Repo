// Last updated: 08/12/2025, 17:41:00
class Solution {
public:
    int maxArea(vector<int>& nums) {
        
        int res=0;
        int lptr=0,rptr=nums.size()-1;
        
        int lmax=nums[lptr],rmax=nums[rptr];
        
        while(lptr<rptr)
        {
            int tres=min(nums[lptr],nums[rptr])*(rptr-lptr);
            res=max(res,tres);
            
            if(nums[lptr]<=nums[rptr])lptr++;
            else if(nums[lptr]>nums[rptr])rptr--;   
            
        }
        return res;
        
    }
};