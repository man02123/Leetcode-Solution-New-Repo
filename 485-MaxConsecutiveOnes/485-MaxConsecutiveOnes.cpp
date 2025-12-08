// Last updated: 08/12/2025, 17:36:35
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int n = nums.size(); 
        int ans = 0;
        int t = 0;
    

       for (int i =1;i<=n;i++){
        if(nums[i-1] == 1) t++;
        else t =0;

        ans = max(ans ,t);
       }

      return ans;
        
    }
};