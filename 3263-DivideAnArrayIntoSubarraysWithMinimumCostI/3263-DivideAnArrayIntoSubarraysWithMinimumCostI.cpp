// Last updated: 09/12/2025, 23:21:34
class Solution {
public:
    int minimumCost(vector<int>& nums) {
        vector<int> pre;
        pre.push_back(nums[0]);
        int mn = nums[0];
        int ans = nums[0];
        
        nums[0]= 100;
        sort(nums.begin(),nums.end());
        ans +=nums[0]+nums[1];
        return ans;
        
    }
    int solve(vector<int>& nums,int ind , int div){
        if(ind >=nums.size()  && div ==3){
            return 0;
        }
        if(ind >=nums.size())return 100;
        
        int ans = 0;
        int st = nums[ind]+solve(nums, ind+1,div+1);
        int p = solve(nums,ind+1,div);
        return min(st,p);
    }
};