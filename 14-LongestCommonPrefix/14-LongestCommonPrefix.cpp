// Last updated: 08/12/2025, 17:40:59
class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        
        if(s.size()==1)
            return s[0];
        
        string res;
        int k=0;
        while(k<s[0].size() && k<s[1].size() && s[0][k]==s[1][k])
            k++;
        res=s[0].substr(0,k);
        
        int tempsize=k;
        
        for(int i=1;i<s.size();i++)
        {
            int t=0;
            
            while(t<res.size() && t<s[i].size() && s[i][t]==res[t])
            {
                t++;
            }
            tempsize=min(t,tempsize);
        }
        res=s[0].substr(0,tempsize);
        return res;
       
    }
};