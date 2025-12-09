// Last updated: 09/12/2025, 23:21:03
class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum = 0;
        for(auto it: nums) sum+=it;
        // vector<int> rsum;
        // int x = 0;
        // rsum.push_back(0);

        // for(int i = nums.size()-1 ;i>=0 ;i--){
        //   x+= nums[i];
        //   rsum.push_back(x);
        // }
        // reverse(begin(rsum) , end(rsum));

        int ans = 0;
        int csum = 0;
        for(int i= 0;i<nums.size()-1 ;i++) {

            csum += nums[i];
            int right = (sum-csum) ;

            if( abs((sum-csum) - csum )%2 == 0) ans ++;
        }
        return ans;
    }
};