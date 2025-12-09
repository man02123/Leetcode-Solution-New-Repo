// Last updated: 09/12/2025, 23:21:38
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        int xr  =0;
        
        for(auto it:nums)xr ^=it;
        
        string x = bitset<32>(xr).to_string();
        string y = bitset<32>(k).to_string();
        
        int ans = 0;
        
        for(int i =0;i<32;i++){
            if(x[i]!=y[i])ans++;
        }
        return ans;
    }
};