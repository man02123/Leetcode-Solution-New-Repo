// Last updated: 05/06/2026, 01:20:45
1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4        
5       int lptr = m-1 ,  rptr = n-1 , mid = nums1.size()-1;
6
7       while(rptr >= 0) {
8        if(lptr >= 0 && nums1[lptr] > nums2[rptr] ) {
9            nums1[mid] = nums1[lptr];
10            mid--;
11            lptr--;
12        }
13        else{
14            nums1[mid] = nums2[rptr];
15            mid--;
16            rptr--;
17        }
18
19       }
20
21    }
22};