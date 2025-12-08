// Last updated: 08/12/2025, 17:38:51
class Solution {
public:
    int findMin(vector<int>& nums) {
        int high = nums.size()-1;

        int low = 0;

        int ans = -1;

        while(low < high) {
            int mid = (low + high) /2;

            if(nums[high] < nums[mid]) {
                low = mid+1;
                ans = mid+1;
            }
            else high = mid;
        }
        if(ans == -1) return nums[0];

         return nums[ans];
    }

};