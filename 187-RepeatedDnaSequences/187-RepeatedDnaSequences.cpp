// Last updated: 08/12/2025, 17:38:40
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.length()<10)
            return {};
        
        unordered_map<string,int> mp;
         vector<string> res;
        
        string window;
        int n=0;
        while(n<10)
            window.push_back(s[n++]);
        mp[window]++;

        
        for(int i=0;i<s.size()-9;i++)
        {
            window.push_back(s[i+10]);
            window.erase(window.begin());
            mp[window]++;   
        }
       for(auto it:mp)
           if(it.second>1)
               res.push_back(it.first);
        
        return res;
    }
};