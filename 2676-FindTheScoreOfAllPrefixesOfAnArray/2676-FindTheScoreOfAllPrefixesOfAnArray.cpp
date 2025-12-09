// Last updated: 09/12/2025, 23:23:58
class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long> temp;
        long long mx=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(mx<=nums[i])
                mx=nums[i];
            
            temp.push_back(mx);
        }
        for(auto it:temp)
            cout<<it;
        long long sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i]+temp[i];
            
            temp[i]=sum;
        }
        return temp;
    }
};