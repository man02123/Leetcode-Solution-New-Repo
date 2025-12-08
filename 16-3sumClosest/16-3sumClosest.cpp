// Last updated: 08/12/2025, 17:40:57
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(begin(nums),end(nums));
       int ans=INT_MAX;
        int min_diff=INT_MAX;
        
        for(int i=0;i<nums.size()-2;i++)
        {
            int l=i+1;
            int r=nums.size()-1;
         
            while(l<r)
            {
                int currsum=nums[i]+nums[l]+nums[r];
                int curr_diff=abs(currsum-target);
                
                    if(min_diff>curr_diff)
                    {
                        min_diff=curr_diff;
                        ans=currsum;
                    }
                       
                if(currsum==target)
                    return currsum;
                else if(target>currsum)
                    l++;
                
    
                else if(target<currsum)
                    r--;
                   
            }
          
        }
        return ans;
        
    }
};