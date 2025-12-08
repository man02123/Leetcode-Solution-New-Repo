// Last updated: 08/12/2025, 17:40:21
class Solution {
public:
    bool canJump(vector<int>& nums) {
      int n=nums.size();
        

        int i=0;
        int cur=0;
        for(i=0;i<n;i++)
        {
           if(i>cur)
               return 0;
            else    
           cur=max(cur,i+nums[i]);
            
            if(cur>=n-1)
          return true;
        
        }
        
        
        return 0;
    }
};