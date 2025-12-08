// Last updated: 08/12/2025, 17:34:03
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        if(nums.size()==1)return 0;
        sort(nums.begin(),nums.end());
        int res=0;
        int nextval=nums[0]+1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<=nums[i-1])
            {
                res+=nextval-nums[i];
               nums[i]=nextval;
                nextval++;
            }
            else 
                nextval=max(nextval+1,nums[i]+1);
               
        }
        
        return res;
        
    }
};