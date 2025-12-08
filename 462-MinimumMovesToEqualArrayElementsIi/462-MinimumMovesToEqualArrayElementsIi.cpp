// Last updated: 08/12/2025, 17:36:39
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        int pivot=0;
        int res=0;
        
        if(n==1)
            return 0;
        
        sort(nums.begin(),nums.end());
        
        if(n%2==0)
        {
            pivot=nums[n/2]+nums[(n/2)-1];
            pivot=pivot/2;
            for(auto it:nums)
            {  
             res=res+abs(it-pivot);   
            }
        }
        else if(n%2!=0)
        {
            pivot=nums[n/2];
            for(auto it:nums)
            {
            res=res+abs(it-pivot);
            }
        }
        return res;
        
    }
};