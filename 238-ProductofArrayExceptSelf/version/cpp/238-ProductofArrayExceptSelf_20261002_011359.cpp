// Last updated: 02/10/2026, 01:13:59
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4         
5         vector<int> pre(nums.size() ,  1) ;
6         vector<int> post(nums.size() ,  1);
7         int p = 1 ,  po = 1 ; 
8
9         for(int i = 0; i < nums.size() ; i++ ) {
10            p = p*nums[i];
11            pre[i] = p;
12         }
13
14          for(int i = nums.size()-1; i > 0 ; i-- ) {
15            po = po*nums[i];
16            post[i] = po;
17         }
18
19         vector<int> ans (nums.size() , 1) ;
20
21         ans[0] = post[1];;
22         ans[nums.size()-1] = pre[nums.size()-2];
23         
24         for(int i = 1 ;i <= nums.size()-2 ;i++) {
25            ans[i] = pre[i-1] * post[i+1];
26         }
27         
28         return ans;
29
30    }
31};