// Last updated: 08/12/2025, 17:36:43
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        int ans = 0;
        sort(begin(g) ,end(g));
        sort(begin(s) ,end(s));
        int ctr = 0;
        for(int i =0 ; i<s.size();i++){
           if(ctr < g.size() && s[i] >= g[ctr])ctr++;
        }
        return ctr;
    }
};