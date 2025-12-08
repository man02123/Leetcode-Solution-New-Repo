// Last updated: 08/12/2025, 17:37:45
class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char,int> mp,visited;
        stack<char> st;
        for(auto &it:s)
            mp[it]++;
        
        for(int i=0;i<s.size();i++)
        {
            
            if(st.size()>0 && st.top()>s[i] && visited[s[i]]==0 )
            {
                while(st.size()>0 && st.top()>s[i] && mp[st.top()]>0 )
                { 
                    visited[st.top()]--;
                    st.pop();
                }
                st.push(s[i]);
                visited[s[i]]=1;
                mp[s[i]]--;
                
            }
            else 
            {
                if(visited[s[i]]==0)
                {
                    st.push(s[i]);
                    visited[s[i]]++;
                }
                 mp[s[i]]--;
            }
            
            
        }
        string res;
        while(st.size()>0)
        {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};