// Last updated: 08/12/2025, 17:39:58
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<3)return nums.size();
    
        int corr=0;
      for(auto it=0;it<nums.size();it++)
      {
          if( corr<2 || nums[it]>nums[corr-2])nums[corr++]=nums[it];
          
          
      }
        return corr;
        
    }
};