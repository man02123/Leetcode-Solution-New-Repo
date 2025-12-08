// Last updated: 08/12/2025, 17:36:45
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mn=*min_element(begin(nums),end(nums));
        int res=0;
       for(int i=0;i<nums.size();i++)
       {
           res+=(nums[i]-mn);
       }
        
        return res;
        
    }
};