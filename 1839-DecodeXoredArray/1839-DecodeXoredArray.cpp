// Last updated: 08/12/2025, 17:30:48
class Solution {
public:
    vector<int> decode(vector<int>& e, int f) {
        vector<int> res;
        res.push_back(f);
        
        e[0]=e[0]^f;
        res.push_back(e[0]);
        for(int i=1;i<e.size();i++)
        {
            e[i]=e[i]^e[i-1];
            res.push_back(e[i]);
        }
        return res;
        
    }
};