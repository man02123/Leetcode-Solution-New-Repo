// Last updated: 09/12/2025, 23:21:14
class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int l) {
        int ans = INT_MAX;
        int n = nums.size();
        
        for(int i =0;i<n;i++){
             
            for(int j =i;j<n;j++){
                
                int xr = nums[i];
                
                for(int k = i;k<=j;k++){
                    xr = xr|nums[k];
                }
                if(xr >= l){
                    ans = min(ans , j-i+1);
                }
            }
            
        }
        if(ans == INT_MAX)return -1;
        
        return ans;
        
    }
};