// Last updated: 08/12/2025, 17:31:47
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int start=0;
        int zeros=0;
        int ones=0;
        int len=0;
        for(int end=0;end<nums.size();end++)
        {
             if(nums[end]==0)
             zeros++;
             else
             ones++; 

            if(zeros>1)
            {
                while(start<end && zeros>1)
                {
                    if(nums[start]==0)
                        zeros--;
                    if(nums[start]==1)
                        ones--; 
                    start++;
                }
            }
           
            
            if(zeros<=1 && ones>=1)
            len=max(len,end-start);
            
        }
        return len;
        
    }
};