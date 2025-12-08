// Last updated: 08/12/2025, 17:33:49
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();++i)
        {
          nums[i]=nums[i]*nums[i];  
            
        }
        sort(nums.begin(),nums.end());
        return nums;
        
    }
};