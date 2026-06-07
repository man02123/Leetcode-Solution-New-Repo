// Last updated: 07/06/2026, 17:38:26
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int e = 0 , cnt =0;
5
6        for(int i =0 ;i<nums.size();i++) {
7            if(cnt == 0) {
8                e = nums[i];
9                cnt++;
10            }
11            else if(cnt > 0 && nums[i] != e){
12                cnt--;
13            }
14            else if(e == nums[i])cnt++;
15        }
16
17        return e;
18    }
19    
20};