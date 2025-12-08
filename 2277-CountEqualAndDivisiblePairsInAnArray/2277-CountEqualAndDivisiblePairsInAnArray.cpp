// Last updated: 08/12/2025, 17:29:15
class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        //sort(nums.begin(),nums.end());
        int res=0;
        
        for(int i=0;i<nums.size()-1;i++)
        {
//             int j=i+1;
//             if(nums[i]==nums[j])
//             {  
            
//                 while(j<nums.size() && nums[i]==nums[j])
//                 {
//                   if(nums[i]==nums[j] && ((i*j)%k)==0)
//                       res++;
                    
//                     j++;
//                 }
//            }
            
            
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j] && ((i*j)%k)==0)
                     res++;
            }
        }
        return res;
        
    }
};
