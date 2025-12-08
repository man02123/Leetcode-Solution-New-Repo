// Last updated: 08/12/2025, 17:37:14
class Solution {
public:
    bool isSubsequence(string s, string t) {
        for(int i=0;i<t.size();i++)
        {
            if(t[i]==s[0])
            {
                s.erase(s.begin());
                
            }
            
        }
        // for(auto it:s)
        //     cout<<s;
        if(s.length()>0)
            return false;
        return true;
    }
};