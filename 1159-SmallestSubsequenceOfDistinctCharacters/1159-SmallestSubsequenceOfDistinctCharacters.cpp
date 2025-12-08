// Last updated: 08/12/2025, 17:33:18
class Solution {
public:
    string smallestSubsequence(string s) {
        unordered_map<char,int> mp;
        unordered_set<char> visited;
        stack<char> st;
        
        for(auto it:s)
            mp[it]++;
        
               st.push(s[0]);
               mp[s[0]]--;
                visited.insert(s[0]);
        
        for(int i=1;i<s.size();i++)
        {
            if(st.size()>0 && st.top()<s[i] && visited.find(s[i])==visited.end())
            {
                st.push(s[i]);
                mp[s[i]]--;
                visited.insert(s[i]);
            }
            else if(st.size()>0 && st.top()>=s[i] && visited.find(s[i])==visited.end())
            {
                while(st.size()>0 && st.top()>=s[i] && mp[st.top()]>0)
                {
                    visited.erase(st.top());
                    st.pop();
                }
                st.push(s[i]);
                mp[s[i]]--;
                visited.insert(s[i]);  
            }
            else
                mp[s[i]]--;
            
        }
        //cout<<mp['c'];
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