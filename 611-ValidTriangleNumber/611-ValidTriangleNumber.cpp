// Last updated: 08/12/2025, 17:35:55
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        if(nums.size()<3)return 0;
        sort(nums.begin(),nums.end());
        int res=0;
        int start,end;
        for(int i=2;i<nums.size();i++)
        {
            
            start=0,end=i-1;
            while(start<end)
            {
            if(nums[start]+nums[end]>nums[i])
             {
                res=res+(end-start);
                end--;
             }
                else
                    start++;
            }
        }
        return res;
        
    }
};