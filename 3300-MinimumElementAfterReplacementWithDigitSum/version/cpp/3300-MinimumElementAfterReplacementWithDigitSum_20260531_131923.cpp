// Last updated: 31/05/2026, 13:19:23
1class Solution {
2public:
3    int minElement(vector<int>& nums) {
4      int ans = INT_MAX;
5
6      for(auto it : nums) {
7        ans = min ( ans , sum(it));
8      }  
9      return ans;
10    }
11
12    int sum (int num) {
13        int s = 0;
14        while(num > 0){
15            s += num%10;
16            num /=10;
17        }
18        return s;
19    }
20};