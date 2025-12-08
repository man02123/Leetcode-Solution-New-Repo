// Last updated: 08/12/2025, 17:29:29
class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long res=0;
        int mx=INT_MIN;
        int mn=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            mn=nums[i];
            mx=nums[i];
            for(int j=i+1;j<nums.size();j++){
                mx=max(nums[j],mx);
                mn=min(nums[j],mn);
               res+=(mx-mn);
            }
        
        }
        return res;
        
    }
};