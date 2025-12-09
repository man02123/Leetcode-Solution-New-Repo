// Last updated: 09/12/2025, 23:24:43
class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        
        for(int i=0;i<s.size();i++)
        {
            char x=s[i];
            if(s[i]=='*')
            {
                st.pop();
            }
            else
                st.push(s[i]);
        }
        string res;
        while(!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        
        return res;
        
    }
};