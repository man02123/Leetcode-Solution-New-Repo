// Last updated: 09/12/2025, 23:22:09
class Solution {
public:
    int maxFrequencyScore(vector<int>& nums, long long k) {
        
        long long int ans = 0;
        int l = 0;
        sort(begin(nums),end(nums));
        
       long long int cost = 0;
        for(int r =0;r<nums.size();r++){
            
            cost += nums[r]-(nums[(l+r)/2]);
            
            while( cost > k){
                
                cost = cost-(nums[(l+r+1)/2]-nums[l]);
                l++;
            }
            ans  = max(ans,(long long int)r-l+1);
        }
        return ans;
    }
};