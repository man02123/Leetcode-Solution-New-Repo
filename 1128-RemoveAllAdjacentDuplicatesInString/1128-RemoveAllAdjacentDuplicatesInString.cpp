// Last updated: 08/12/2025, 17:33:21
class Solution {
public:
    string removeDuplicates(string &s) {
       stack<int> st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++)
        {
            if(st.size()>0 && st.top()==s[i])
                st.pop();
            else
                st.push(s[i]);
        }
        
         s.erase();
        while(st.size()!=0)
        {
            s.push_back(st.top());
            st.pop();
        }
        reverse(s.begin(),s.end());
       return s; 
    }
};