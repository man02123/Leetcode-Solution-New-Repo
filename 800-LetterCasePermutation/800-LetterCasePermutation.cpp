// Last updated: 08/12/2025, 17:34:56
class Solution {
public:
    vector<string> v;
    vector<string> letterCasePermutation(string s) {
        string out;
        solve(s,out);
       return v;
    }
      void solve(string s,string out)
      {
        if(s.length()==0)
        {
         v.push_back(out);
            return;
        }
          string out1=out;
          string out2=out;
          
          if(isalpha(s[0])!=0)
          {
              out1.push_back(tolower(s[0]));
              out2.push_back(toupper(s[0]));
               s.erase(s.begin());
              solve(s,out1);
              solve(s,out2);
          }
          else
          {
               out1.push_back((s[0]));
               s.erase(s.begin());
             solve(s,out1);
          }
         
          
            
      }
};