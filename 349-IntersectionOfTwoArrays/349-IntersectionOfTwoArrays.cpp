// Last updated: 08/12/2025, 17:37:30
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> mp={nums1.begin(),nums1.end()};
         vector<int> v;
        for(auto c:nums2)
             {
               if(mp.find(c)!=mp.end())
               {
                 v.push_back(c);
                   mp.erase(c);
               }
               
              }

         return v;
        
    }
};