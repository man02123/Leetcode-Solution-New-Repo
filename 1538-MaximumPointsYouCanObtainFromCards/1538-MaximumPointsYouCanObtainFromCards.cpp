// Last updated: 08/12/2025, 17:32:05
class Solution {
public: 
    int maxScore(vector<int>& nums, int k) {
        int res;
        int currsum=0;
        int win=nums.size()-k;
        int j=0;
        while(j<win)
            currsum+=nums[j++];
        res=currsum;
        
        for(int i=0;i+win<nums.size();i++)
        {
            currsum+=nums[i+win];
            currsum-=nums[i];
            
            res=min(res,currsum);
                
        }
        int t=accumulate(begin(nums),end(nums),0);
        return t-res;
       
    }
};