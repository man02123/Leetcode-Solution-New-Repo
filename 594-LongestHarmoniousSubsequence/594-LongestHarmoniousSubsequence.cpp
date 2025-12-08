// Last updated: 08/12/2025, 17:35:58
class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int i=0;
        while(i<nums.size()-1)
        {
            int j=i;
            while(j<nums.size()-1 && abs(nums[j]-nums[i])<=1)
            {
              
                  j++;
                  if(nums[j]-nums[i]==1)
                ans=max(ans,j-i+1);
                                
            }
            i++;
        }
        return ans;
    }
};