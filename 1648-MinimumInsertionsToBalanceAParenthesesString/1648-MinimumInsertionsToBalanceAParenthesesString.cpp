// Last updated: 08/12/2025, 17:31:34
class Solution {
public:
    int minInsertions(string s) {
        stack<int> st;
        int res=0;
        
        for(int i=0;i<s.size();i++)
        {
            
            if(s[i]=='(')
            {
                if(st.size()==0 || st.top()==2)st.push(2);
                else
                {
                    st.pop();
                    res++;
                    st.push(2);
                }
             }
            else 
            {
                if(st.size()==0)
                {
                    st.push(1);
                    res++;
                }
                else if(st.top()==1)
                {
                    st.pop();
                }
                else if(st.top()==2)
                {
                    st.pop();
                    st.push(1);
                }
            }
        }
        while(st.size()>0)
        {
            res+=st.top();
            st.pop();
        }
                
     
        
        
        return res;
        
    }
};