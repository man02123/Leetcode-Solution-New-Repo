// Last updated: 08/12/2025, 17:34:58
class Solution {
public:
    int numRabbits(vector<int>& a) {
        unordered_map<int,int> mp;
        
        for(auto it:a)mp[it]++;
        int cnt=0;
        int res=0;
        for(auto it:mp)
        {
            res+=(it.first+it.second)/(it.first+1)*(it.first+1);
           
        }
        
       return res; 
    }
};