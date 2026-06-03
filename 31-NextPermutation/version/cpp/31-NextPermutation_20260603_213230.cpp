// Last updated: 03/06/2026, 21:32:30
1class Solution {
2public:
3    void nextPermutation(vector<int>& nums) {
4        
5        int pind = nums.size()-1;
6        int lelm = nums.back();
7
8        while(pind>=0) {
9            if(nums[pind] < lelm){
10                break;
11            }
12            lelm = nums[pind];
13            pind--;
14        }
15
16
17        if(pind == -1){
18            reverse(begin(nums) , end(nums));
19            return;
20        }
21
22        for(int i = nums.size()-1;i>= pind;i--){
23            if(nums[i] > nums[pind]){
24               swap(nums[i] , nums[pind]);
25               break;
26            }
27        }
28
29
30       reverse(nums.begin()+pind+1 , nums.end());
31    }
32};