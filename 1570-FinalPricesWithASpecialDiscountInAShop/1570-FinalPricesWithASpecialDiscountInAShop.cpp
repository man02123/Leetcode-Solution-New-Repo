// Last updated: 08/12/2025, 17:31:54
class Solution {
public:
    vector<int> finalPrices(vector<int>& nums) {
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            bool flag=0;
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]>=nums[j])
                {
                    res.push_back(nums[i]-nums[j]);
                    flag=1;
                    break;
                }
            }
            if(flag==0)res.push_back(nums[i]);
            
        }
        return res;
    }
};