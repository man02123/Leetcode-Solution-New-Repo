// Last updated: 08/12/2025, 17:37:29
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mp;
       
        
        for(auto it:nums1)
            mp[it]++;
        nums1.clear();
        for(int i=0;i<nums2.size();++i)
        {
          
        if(mp[nums2[i]]>0)
        {
         nums1.push_back(nums2[i]) ;
           mp[nums2[i]]--;
        }

        }
        return nums1;
        
    }
};