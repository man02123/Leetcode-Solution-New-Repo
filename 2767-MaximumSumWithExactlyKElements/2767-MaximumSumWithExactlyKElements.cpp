// Last updated: 09/12/2025, 23:23:21
class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int x =*max_element(nums.begin(),nums.end());
        int res = 0;
        while(k--)
        {
            res+=x;
            x=x+1;
        }
        return res;
    }
};