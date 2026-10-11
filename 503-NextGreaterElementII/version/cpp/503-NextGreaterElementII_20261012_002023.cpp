// Last updated: 12/10/2026, 00:20:23
1class Solution {
2public:
3    vector<int> nextGreaterElements(vector<int>& nums) {
4        stack<int> st;
5
6        for(int i = nums.size()-1 ; i >= 0 ;i--) {
7            
8            if(st.size() == 0) {
9                st.push(nums[i]);
10            }
11            else {
12                while(st.size() > 0 && st.top() < nums[i]){
13                    st.pop();
14                }
15                st.push(nums[i]);
16            }
17        }
18
19        // int lastLar = st.top();
20        // while(st.size() > 0) st.pop();
21        // st.push(lastLar);
22
23            vector<int> ans (nums.size() , -1);
24
25            for(int i = nums.size()-1 ; i >= 0 ;i--) {
26
27                if(st.size() == 0)
28                st.push(nums[i]);
29                else{
30                    while(st.size() > 0 && st.top() <= nums[i]){
31                    st.pop();
32                 }
33                if(st.size() == 0) st.push(nums[i]); 
34                 
35                 if(st.top() != nums[i]){                     
36                    ans[i] = st.top();
37                    st.push(nums[i]); 
38                 }
39                }
40
41            }
42
43            return ans; 
44    }
45};