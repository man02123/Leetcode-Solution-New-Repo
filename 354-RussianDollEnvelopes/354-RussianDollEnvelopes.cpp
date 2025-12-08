// Last updated: 08/12/2025, 17:37:27
class Solution {
public:
    static bool cmp(vector<int> &a,vector<int> &b)
    {
        if(a[0]==b[0])return(a[1]>b[1]);
        else return a[0]<b[0];
    }
    int maxEnvelopes(vector<vector<int>>& nums) {
         vector<int> res;
        
   sort(nums.begin(),nums.end(),cmp);
   
         for(int i=0;i<nums.size();i++)
        {
             int el=nums[i][1];
            
             int ind=lower_bound(res.begin(),res.end(),el)-res.begin();
             
             if(ind>=res.size())
                 res.push_back(el);
             else 
                 res[ind]=el;
             
                 
        } 
        return res.size();                         
                                                                  

    }
};