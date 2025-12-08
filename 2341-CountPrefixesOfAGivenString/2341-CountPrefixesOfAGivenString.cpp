// Last updated: 08/12/2025, 17:29:06
class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        
        int res=0;
        for(int i=0;i<words.size();++i)
        {
          string temp=s.substr(0,words[i].size());
            if(temp==words[i])
                ++res;
           
        }
        return res;
        
    }
};