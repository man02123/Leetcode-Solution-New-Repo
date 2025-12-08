// Last updated: 08/12/2025, 17:37:41
class Solution {
public:
    void wiggleSort(vector<int>& nums) {
    
      sort(nums.begin(),nums.end());
        
        vector<int> res(nums.size(),0);
        
        int j=nums.size()-1;
        
    for(int i=1;i<nums.size();i++)
        res[i++]=nums[j--];
        
    
        for(int i=0;i<nums.size();i++)
        res[i++]=nums[j--];
        
       nums=res;
        
    
        
    }
};