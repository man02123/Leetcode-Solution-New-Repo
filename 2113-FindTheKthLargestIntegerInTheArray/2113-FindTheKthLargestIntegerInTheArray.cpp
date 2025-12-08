// Last updated: 08/12/2025, 17:29:54
class Solution {
public:
     static bool comp(const string &a,const string &b)
        {
           return (a.size()!=b.size())?(a.size()>b.size()):(a>b);
        }
    string kthLargestNumber(vector<string>& nums, int k) {
        vector<int> res;
//         for(int i=0;i<nums.size();i++)
//         {
//             res.push_back(stoi(nums[i]));
//         }
//         sort(res.begin(),res.end());
//         int x;
//         if(res.size()-k>=0)
//              x=res[res.size()-k];     //integer overflow because  u forgot to check the constraints
        
//         string s=to_string(x);
       
        sort(nums.begin(),nums.end(),comp);
        
        string s=nums[k-1];
        return s;
    }
};