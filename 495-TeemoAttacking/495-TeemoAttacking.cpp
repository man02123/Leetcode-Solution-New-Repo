// Last updated: 08/12/2025, 17:36:29
class Solution {
public:
    int findPoisonedDuration(vector<int>& nums, int d) 
    {
       if(nums.size()==0)return 0;
       int res=0;
        for(int i=0;i+1<nums.size();i++)
        {
            res+=min(nums[i+1]-nums[i],d);
            
        }
        
    return res+d;
        
    }
};