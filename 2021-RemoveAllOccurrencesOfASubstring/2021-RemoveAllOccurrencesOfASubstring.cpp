// Last updated: 08/12/2025, 17:30:17
class Solution {
public:
    string removeOccurrences(string s, string p) {
        //stack<char> st;
        
//         for(int i=0;i<s.size();i++)
//         {
//             int k=0;
//             if(s[i]==p[k])
//             {
//                 while(i<s.size() && k<p.size() && s[i]==p[k])
//                 {
//                     st.push(s[i]);
//                     i++;
//                     k++;
//                 }
//                 if(k==p.length())
//                 {
//                     while(k!=0)
//                     {
//                         st.pop();
//                         k--;
//                       }
//                 }
//                 i=i-1;        
//             }
//             else 
//                 st.push(s[i]);
    
//         }
//         string res;
//         while(st.size()>0)
//         {
//             res.push_back(st.top());
//             st.pop();
//         }
//         reverse(res.begin(),res.end());
//         return res;
            
        while(s.size()!=0 && s.find(p)<s.size())
        {
            auto itr=s.find(p);
            s.erase(itr,p.size());
        }
       return s; 
    }
};