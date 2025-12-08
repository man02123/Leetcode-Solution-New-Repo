// Last updated: 08/12/2025, 17:37:37
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3)
            return false;
        vector<int> res{nums[0]};
        for(int i=1;i<nums.size();i++)
        {
            int ind=lower_bound(res.begin(),res.end(),nums[i])-res.begin();
            if(ind>=res.size())
                res.push_back(nums[i]);
            else 
                res[ind]=nums[i];
            
              if(res.size()>=3)
            return true;
        }
        
      
        return false;
        
    }
};