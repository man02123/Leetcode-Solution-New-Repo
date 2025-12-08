// Last updated: 08/12/2025, 17:28:35
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& q) {
        sort(nums.begin(),nums.end());
        int psum=0;
        vector<int> prefix;
        for(int i=0;i<nums.size();i++)
        {
            psum+=nums[i];
            prefix.push_back(psum);
        }
        
        vector<int> v;
        for(int i=0;i<q.size();i++)
        {
            int res=0;
            for(auto it=0;it<prefix.size();it++)
            {
                if(q[i]>=prefix[it])
                    res=max(res,it+1); 
                else
                    break;
            }
            v.push_back(res);
        }
        return v;
    }
};
