// Last updated: 28/10/2026, 18:58:27
1class Solution {
2public:
3    int search(vector<int>& nums, int t) {
4        int rotIndx = -1;
5       // template to find the. rotated index , once we finf the index , then do other op.
6       int low = 0 , hi = nums.size()-1;
7       int mid = -1;
8       while(low < hi) {
9        mid = (low + hi)/2;
10
11        if(nums[mid] >= nums[hi]) {
12             low = mid+1;
13            rotIndx = mid;
14        }
15        else 
16        hi = mid;
17       }
18
19      if(rotIndx != -1) {
20         int ind1 = check(nums ,t,  0 ,  low );
21         int ind2 = check(nums ,t,  low ,  nums.size() );
22
23         if(ind1 !=-1) return ind1;
24         return ind2;
25      }
26      else{
27         return check(nums ,t,  0 ,  nums.size() );
28      }
29
30    }
31    int check(vector<int>& nums, int t ,  int low ,  int hi) {
32        
33        while(low < hi) {
34            int mid = (low + hi)/2;
35            if(nums[mid] == t) {
36                return mid;
37            }
38            else if(nums[mid] > t){
39                hi = mid;
40            }
41            else
42            low = mid+1;
43        }
44        return -1;
45
46    }
47};