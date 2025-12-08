// Last updated: 08/12/2025, 17:40:24
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int ans = INT_MIN;

        int csum = 0;
        int left = 0;

        for (int i =0;i<nums.size() ; i++){

            
           // ans = max(ans , csum);

             
               csum += nums[i];
               ans = max(ans , csum);

                 if(csum < 0){
                csum = 0;
               }
    
        }
        return ans;
    }

              
};