// Last updated: 09/12/2025, 23:22:05
class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
       set<int> mp1,mp2;
        int n = nums1.size();
        int m = nums2.size();
       for(auto it:nums1)mp1.insert(it);
         for(auto it:nums2)mp2.insert(it);
        vector<int>ans;
        int cnt1 = 0,cnt2 =0;
        for(int i= 0;i<n;i++){
            if(mp2.find(nums1[i]) != mp2.end()){
               cnt1++; 
            }
        }
        for(int i= 0;i<m;i++){
            if(mp1.find(nums2[i]) != mp1.end()){
               cnt2++;
            }
        }
        return {cnt1,cnt2};
    }
};