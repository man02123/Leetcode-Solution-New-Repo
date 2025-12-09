// Last updated: 09/12/2025, 23:23:59
class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& g) {
        vector<int> res;
        
        for(int i=0;i<g[0].size();i++)
        {
            int cnt=INT_MIN;
            for(int j=0;j<g.size();j++)
            {
                string temp=to_string(g[j][i]);
                int x=temp.size();
                cnt=max(cnt,x);
            }
            res.push_back(cnt);
        }
        return res;
    }
};