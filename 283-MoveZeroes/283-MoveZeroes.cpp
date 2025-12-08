// Last updated: 08/12/2025, 17:37:54
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start = 0;
        int zptr = 0 ; 

        while( start  < nums.size()){
            
            if(nums[start] != 0){
                nums[zptr++] = nums[start++];
            }
            else
            start++;

        }
      for(int i = zptr ; i < nums.size() ;i ++){

        nums[i] = 0;

      }
    }
};