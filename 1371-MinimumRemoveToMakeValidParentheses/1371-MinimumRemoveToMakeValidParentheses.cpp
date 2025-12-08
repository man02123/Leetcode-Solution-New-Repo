// Last updated: 08/12/2025, 17:32:42
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string res="";
        stack<char> st;
        int right=0;
        int left=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=')')
            {
                st.push(s[i]);
                if(s[i]=='(')
                    right++;
            }
                
            else if(s[i]==')' && right>0)
            {
                st.push(s[i]);
                right--;
            }
            
        }
        while(st.size()>0)
        {
            //cout<<st.top();
            if(right>0 && st.top()=='(')
                right--;  
            else
                res.push_back(st.top());
            st.pop();

        }
        reverse(res.begin(),res.end());
      return res;   
        
    }
};