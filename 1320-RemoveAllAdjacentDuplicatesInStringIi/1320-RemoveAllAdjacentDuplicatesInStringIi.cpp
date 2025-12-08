// Last updated: 08/12/2025, 17:32:51
class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        
        pair<char,int> p;
        p.first=s[0];
        p.second=1;
        st.push(p);
        
        for(int i=1;i<s.size();i++){
            
            pair<char,int> temp;
            temp.first=s[i];
            temp.second=1;
            
            if(st.size()>0 && st.top().first==s[i])
            {
                temp.second=st.top().second+1;
                st.push(temp);
                if(temp.second==k)
                {
                    int l=k;
                    while(l){
                        st.pop();
                        l--;
                    }
                }
            }
            
            else
            st.push(temp);
}
        
               string res;
  while(st.size()!=0)
  {
      res.push_back(st.top().first);
      
      st.pop();
  }
       reverse(res.begin(),res.end());
        return res;
    }
};