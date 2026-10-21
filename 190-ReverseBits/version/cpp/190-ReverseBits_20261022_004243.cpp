// Last updated: 22/10/2026, 00:42:43
1class Solution {
2public:
3    int reverseBits(int n) {
4       uint32_t ans = 0;
5        for(int i = 0; i < 32 ; i++) {
6            
7            int bit = n & 1;
8
9            ans = (ans << 1 ) | bit;
10            n = n >> 1;
11
12        }
13        return ans;
14    }
15};