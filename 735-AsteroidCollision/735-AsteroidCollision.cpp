// Last updated: 08/12/2025, 17:35:21
class Solution {
public:
    bool check(int x,int y)
    {
       if ((x>0 && y<0)|| (x<0 && y>0))
           return true;
        return false;
    }
    vector<int> asteroidCollision(vector<int>& a) {
       stack<int> st;
        for(int i=0;i<a.size();i++)
        {
            if(st.size()>0 && check(st.top(),a[i])==true && st.top()>0)
            {
               
                int x=abs(st.top());
                int y=abs(a[i]);
                
                 if(x>y)
                     continue;
                
                else if(x==y)
                    st.pop();
                
                else if(x<y)
                {
                 while(st.size()>0 && check(st.top(),a[i]) && (abs(st.top())<abs(a[i])) )
                  st.pop();
                    
                    bool flag=0;
                    if(st.size()>0 && check(st.top(),a[i]) && (st.top())==abs(a[i]))
                    {
                        st.pop();
                        flag=1;
                    }
                    if(flag==0)
                    {
                   if(st.size()>0 && check(st.top(),a[i])==false)
                       st.push(a[i]);
                   // else if(st.size()>0 && check(st.top(),a[i]) && (abs(st.top())<abs(a[i])))
                   //  st.push(a[i]);
                    else if(st.size()==0)
                        st.push(a[i]);
                    }
                    
                }
                        
            }
            else
                st.push(a[i]);
        }    
        
        
    vector<int> res;
    
    while(st.size()>0)
    {
        res.push_back(st.top());
            st.pop();
    }
    reverse(res.begin(),res.end());
        return res;
    }
};