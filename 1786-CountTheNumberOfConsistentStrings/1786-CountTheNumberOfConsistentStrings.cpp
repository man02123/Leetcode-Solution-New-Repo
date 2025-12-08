// Last updated: 08/12/2025, 17:31:02
class Solution {
public:
    int countConsistentStrings(string a, vector<string>& w) {
        unordered_map<char,int> mp;
        for(auto it:a)
            mp[it]++;
        int count=0;
        
        for(int i=0;i<w.size();i++)
        {
            int j;
            for(j=0;j<w[i].size();j++)
            {
                if(mp[w[i][j]]==0)
                    break;
            }
            if(j==w[i].size())count++;
        }
        return count;
        
    }
};