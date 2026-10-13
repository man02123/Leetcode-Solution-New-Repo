// Last updated: 14/10/2026, 01:46:25
1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4        if(nums.size() <= 1) return nums;
5
6       int cnt1 = 0 ,  cand1 =nums[0];
7       int cnt2 = 0 ,  cand2 =nums[1];
8
9
10
11       for(int i = 0;i<nums.size() ; i++) {
12          
13
14         if(nums[i] == cand1) {
15            cnt1++;
16         }
17         else if(nums[i] == cand2) {
18            cnt2++;
19         }
20         else if(cnt1 == 0) {
21                cand1 = nums[i];
22                cnt1 = 1;
23              }
24         else if(cnt2 == 0) {
25                cand2 = nums[i];
26                cnt2 = 1;
27              }
28             else {
29                cnt1--;
30                cnt2--;
31             }
32         }
33
34       cnt1 = 0 , cnt2 = 0; 
35       for(auto it:  nums) {
36        if(it == cand1) cnt1++; 
37        else if(it == cand2) cnt2++;
38       }
39
40       vector<int> ans;
41         if(cand1 == cand2) return {cand1};
42         if(cnt1 > (nums.size()/3) ){
43            ans.push_back(cand1);
44         }
45
46          if(cnt2 > (nums.size()/3) ){
47            ans.push_back(cand2);
48         }
49         
50         return ans;
51
52    }
53};
54