// Last updated: 08/12/2025, 17:29:27
class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string res;
        int k=0;
        

        for(int i=0;i<s.size();i++){
            if(k<spaces.size() && i==spaces[k])
            {
                res.push_back((char)32);
                k++;
            }
            res.push_back(s[i]);
        }
        return res;
        
    }
};