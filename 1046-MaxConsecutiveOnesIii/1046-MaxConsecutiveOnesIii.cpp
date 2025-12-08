// Last updated: 08/12/2025, 17:33:37
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int z = 0;

        int ans = 0;
        int left = 0;

        for(int i =0 ;i<nums.size() ;i++){

            if(nums[i] == 0)z++;

            while(left <= i && z >k ){
              if(nums[left] == 0){
                z--;
              }
              left++;
            }

            ans = max(ans ,  i-left+1);

        }
        return ans;
    }
};