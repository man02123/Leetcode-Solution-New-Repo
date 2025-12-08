// Last updated: 08/12/2025, 17:28:45
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        
        long long int  ans = 0;

        long long int  curr = nums[0] == 0 ? 1 : 0;

        for(int i = 1;i < nums.size();i++) {

            if(nums[i-1] == nums[i] && !nums[i]){
                curr++;
            }
          
          else if(nums[i] !=0) {
            ans += (curr) * (curr+1) /2;
            curr = 0;
          }
          else curr = 1;

        }
        if(curr > 0)
        ans += (long long)((curr) * (curr+1)) /2;
        return ans;
    }
};