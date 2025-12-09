// Last updated: 09/12/2025, 23:21:54
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        map<int,int> mp;
        int l = 0;
        int ans = 0;
        int cmax = 0;
        for(int r = 0;r<nums.size();r++ ){
            mp[nums[r]]++;
            
            if(mp[nums[r]] <=k)
             ans = max(ans,(r-l+1));
        else{
            int c =nums[r];
            while(l<=r && mp[c]>k){
                mp[nums[l]]--;
                l++;
            }
        }
            ans = max(ans,(r-l+1));
        
    }
        return ans;
        
    }
};

//
//[3,3,2]
//1
//[1,2,1,5]
//1
