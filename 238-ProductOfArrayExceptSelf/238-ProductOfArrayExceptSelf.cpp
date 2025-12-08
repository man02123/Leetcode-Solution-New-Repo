// Last updated: 08/12/2025, 17:38:05
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int post=1;
        int pre=1;
        vector<int> res;
        res.push_back(pre);
        int n=nums.size();
        for(int i=0;i<n-1;++i)
        {
            pre=pre*(nums[i]);
            res.push_back(pre);
            
        }
       
        for(int i=n-1;i>=0;--i)
        {
            
            res[i]=post*res[i];
                post=post*nums[i];
            
            
        }
        return res;
        
    }
};