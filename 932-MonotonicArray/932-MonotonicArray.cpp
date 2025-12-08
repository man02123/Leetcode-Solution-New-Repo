// Last updated: 08/12/2025, 17:34:23
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
       
        if(nums.size()==1)
            return 1;
        int inc=1,dec=1;
     
        for(int i=0;i< nums.size()-1;++i)
        {
            if(nums[i]<=nums[i+1])
          ++inc;
          
        if(nums[i]>=nums[i+1])
          ++dec;
        
        }
        if(dec== nums.size() || inc==  nums.size())
            return 1;
          
      
       return 0;
    }
};