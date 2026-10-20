// Last updated: 20/10/2026, 17:51:10
1class Solution {
2public:
3    vector<int> singleNumber(vector<int>& nums) {
4        long long int x = 0;
5
6        for(auto it : nums) x = it ^ x;
7         long long int lastOn = (x & (x-1)) ^ x;
8        int buc1 = 0 ,  buc2 = 0;
9
10        for(int i =0 ;i < nums.size() ; i++) {
11            
12            if(nums[i] & lastOn) {
13                buc2 ^= nums[i];
14            }
15            else buc1 ^= nums[i];
16        }
17        return {buc1 ,  buc2};
18
19    }
20};
21