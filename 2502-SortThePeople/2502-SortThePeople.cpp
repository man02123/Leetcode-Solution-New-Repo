// Last updated: 09/12/2025, 23:24:33
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string> mp;
        for(int i=0;i<names.size();i++)
        {
            mp[heights[i]]=names[i];
        }
        
        vector<string> res;
        for(auto it:mp)
            res.push_back(it.second);
        reverse(res.begin(),res.end());
        return res;
            
    }
};