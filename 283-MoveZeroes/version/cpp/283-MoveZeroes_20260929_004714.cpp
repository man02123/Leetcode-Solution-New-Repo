// Last updated: 29/09/2026, 00:47:14
1// class Solution {
2// public:
3//     void moveZeroes(vector<int>& nums) {
4//         int left = 0 , right = 0;
5
6//         while(right < nums.size() && left<nums.size()) {
7
8//           // get a non zero with right 
9//           while(right < nums.size() &&  nums[right] == 0) {
10//             right++;
11//           }
12
13//            while(left <= right &&  nums[left] != 0) {
14//             left++;
15//           }
16          
17//           if(left<nums.size() && right < nums.size())
18//           swap(nums[left++], nums[right++]);
19
20//         }
21//     }
22// };
23
24class Solution {
25public:
26    void moveZeroes(vector<int>& nums) {
27        int nz = 0,z = 0;
28        int n = nums.size();
29        
30        while(nz<nums.size() && z<nums.size())
31        {
32            while(nz<n && nums[nz]==0)
33                nz++;
34            while(z<n && z<nz && nums[z]!=0)
35                z++;
36            
37            if(nz<n && z<n)
38                swap(nums[nz++],nums[z++]);
39      
40        }
41        
42    }
43};