// Last updated: 08/12/2025, 17:37:57
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0 ;
        int len = nums.size();
        int tsum = 0;

        if(len%2 ==1)
        tsum = ((len+1)/2) * len;
        else 
         tsum = ((len)/2) * (len+1); 
        

        for (auto it : nums) sum += it;

        return tsum - sum;
    }
};