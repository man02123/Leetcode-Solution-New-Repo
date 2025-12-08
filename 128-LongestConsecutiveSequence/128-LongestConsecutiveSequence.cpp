// Last updated: 08/12/2025, 17:39:13
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

       int n = nums.size();
       map<int ,int> st;

       for(auto it : nums )st[it]++;
       int ans = 0;
       if(nums.size() >=1) ans = 1 ;
       for(auto it : st) {
        int currVal = it.first;
        int currFreq = it.second;

        if(currFreq == 0)continue;
        bool flag = true;
        int tans = 1;
        while(flag) {

            if(st[currVal+1] > 0 ){
               st[currVal+1] = 0;
               currVal++;
               tans++;
               ans = max(ans , tans);
            }else flag = false;
        }

       }
       return ans;
    }
};