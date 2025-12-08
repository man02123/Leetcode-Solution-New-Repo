// Last updated: 08/12/2025, 17:37:32
class Solution {
public:
    void reverseString(vector<char>& s) {
            stack<char> st;
       for(auto i:s)
           st.push(i);
        s.clear();
        while(st.size()!=0)
        {
     s.push_back(st.top());
            st.pop();
        }
   
        
    }
};