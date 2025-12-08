// Last updated: 08/12/2025, 17:33:25
class Solution {
public:
    int countCharacters(vector<string>& w, string c) {
        vector<int> mp(26,0);
        for(auto it:c)
            mp[it-'a']++;
        int res=0;
        
        for(int i=0;i<w.size();i++)
        {
            vector<int> temp=mp;
            int j;
            for(j=0;j<w[i].size();j++)
            {
               temp[w[i][j]-'a']--;
                if(temp[w[i][j]-'a']<0)
                    break; 
            }
            if(j==w[i].size())
                res+=w[i].size();
            
        }
        return res;
        
    }
};