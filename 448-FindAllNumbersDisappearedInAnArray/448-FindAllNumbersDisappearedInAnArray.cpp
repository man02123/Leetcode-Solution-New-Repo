// Last updated: 08/12/2025, 17:36:48
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       set<int> st={nums.begin(),nums.end()};
        vector<int> res;
        for(int i=0;i<nums.size();++i)
        {
            if(st.find(i+1)==st.end())
                res.push_back(i+1);
        }
        return res;
        
    }
};