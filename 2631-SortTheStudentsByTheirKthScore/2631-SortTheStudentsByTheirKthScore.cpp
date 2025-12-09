// Last updated: 09/12/2025, 23:24:10
class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& s, int k) {
        vector<pair<int,int>> pq;
        
        for(int i=0;i<s.size();i++)
            pq.push_back({s[i][k],i});
        
        sort(pq.begin(),pq.end());
                
         vector<vector<int>> res;
        for(int i=pq.size()-1;i>=0;i--)
        {
            res.push_back(s[pq[i].second]);
        }
        return res;
    }
};