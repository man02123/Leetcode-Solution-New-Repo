// Last updated: 08/12/2025, 17:31:14
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        sort(nums.begin(),nums.end(),[&](int a,int b)
        {return m[a]!=m[b]?m[a]<m[b]:a>b;}) ;
        return nums;
     
    }
};