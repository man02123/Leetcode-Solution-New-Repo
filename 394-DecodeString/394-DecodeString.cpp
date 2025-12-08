// Last updated: 08/12/2025, 17:37:13
class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        stack<int> num;
        
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i])==true)
            {
                int n=0;
                int end=i;
                
                while(isdigit(s[end])==true)
                    end++;
                
                n=stoi(s.substr(i,end-i));
                num.push(n);
                i=end-1;
                    
            }
            else if(s[i]==']')
            {
                int times=num.top();
                num.pop();
                
                string temp="";
                while(st.size()>0 && st.top()!="[")
                {
                    temp+=st.top();
                    st.pop();
                }
                
                st.pop();
                string r;
                while(times>0)
                {
                    r+=temp;
                    times--;
                }
                st.push(r);
            }
            else 
            {
                string t;
                t.push_back(s[i]);
                st.push(t);
            }

        }
        string res=st.top();
        st.pop();
        while(st.size()>0)
        {
           res=res+st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
            
    }
};