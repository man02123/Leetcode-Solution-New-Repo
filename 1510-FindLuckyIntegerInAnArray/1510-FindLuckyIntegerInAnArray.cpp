// Last updated: 08/12/2025, 17:32:10
class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
       for(auto it:arr)
           mp[it]++;
        int res=-1;
        for(auto it:mp)
        {
            if(it.first==it.second)
            {
                res=max(res,it.second);
            } 
            
        }
        return res;
    }
};