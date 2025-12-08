// Last updated: 08/12/2025, 17:35:26
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int mul=1;
        int res=0;
        int i=0,j=0;
        int n=nums.size();
        if(k<=1)
return 0;        
        for(j=0;j<n;j++)
        { 
            mul=mul*nums[j];
            while(mul>=k)
            {
                mul=mul/nums[i];
                i++;
            }
                
            res=res+(j-i)+1;
        }
       return res; 
    }
};