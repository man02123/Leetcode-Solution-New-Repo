// Last updated: 08/12/2025, 17:35:23
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        if(l==r)
            return 0;
        
    
        int lsum=0;
        int rsum=accumulate(nums.begin(),nums.end(),0);
        
       for(int i=0;i<nums.size();i++){
           
           rsum=rsum-nums[i];
           if(lsum==rsum)
               return i;
           lsum+=nums[i];
           
       }
        
       return -1; 
    }
};