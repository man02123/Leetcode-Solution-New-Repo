// Last updated: 08/12/2025, 17:36:17
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
       
        int res=0;
        int sum=0;
       
  
        for(int i=0;i<nums.size();++i)
        {
          if(nums[i]==1)
              sum+=1;
            else
                sum+=-1;
            
            
            
            if(sum==0)
            {
                res=max(res,i+1);
                
            }
            else if(mp.find(sum)!=mp.end())
            {
                int n=mp[sum];
                res=max(res,abs(i-n));
            }
            else if(mp.find(sum)==mp.end())
            {
                mp[sum]=i;
            }
            
            
            
            
        }
        
        return res;
        
    }
};