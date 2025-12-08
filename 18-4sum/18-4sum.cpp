// Last updated: 08/12/2025, 17:40:54
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
           map<vector<int>, int> mp;
      
        vector<vector<int>> res;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int l=j+1;
                int r=n-1;
              
                while(l<r)
                {
                      long long currsum=(long long)nums[i]+nums[j]+nums[l]+nums[r];
                    
                    if(currsum==target)
                    {
                        mp[{nums[i],nums[j],nums[l],nums[r]}]++;
                        if(mp[{nums[i],nums[j],nums[l],nums[r]}]==1)
                        res.push_back({nums[i],nums[j],nums[l],nums[r]});
                        
                        // while(l<r && currsum>target)l++;
                        // while(l<r && currsum<target)r--;
                        l++;
                        r--;
                    }
                    else if(currsum>target)r--;
                    else if(currsum<target)l++;
                    
                    
                    
                }
            }
        }
        
        return res;
    }
};