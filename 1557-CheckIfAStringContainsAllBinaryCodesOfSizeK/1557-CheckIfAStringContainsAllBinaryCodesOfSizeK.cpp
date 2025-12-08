// Last updated: 08/12/2025, 17:31:58
class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(k>s.size())return false;
        unordered_set<string> mp;
        
        string temp=s.substr(0,k);
        mp.insert(temp);
        
        for(int i=1;i+k<=s.size();i++)
        {
            string temp=s.substr(i,k);
            if(mp.find(temp)==mp.end())
           mp.insert(temp);
        }
     
        int n=pow(2,k);
        if(mp.size()>=n)return true;
        return false;
        
    }
};