// Last updated: 08/12/2025, 17:40:52
class Solution {
public:
    bool isValid(string s) {
      stack<char> st;

      for( int i = 0 ; i< s.size();i++) {

        if(s[i] == '(' || s[i] == '{' || s[i] == '[')st.push(s[i]);
        else {
            if(s[i] == ')'){
                if(st.size() > 0 && st.top() == '(')st.pop();
                else return false;
            }
            else if(s[i] == ']'){
                if(st.size() > 0 && st.top() == '[')st.pop();
                else return false;
            }
            if(s[i] == '}'){
                if(st.size() > 0 && st.top() == '{')st.pop();
                else return false;
            }
        }

      }
      return st.size() == 0;  
    }
};