// Last updated: 09/12/2025, 23:22:12
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& w, char x) {
        
        vector<int> res;
        for(int i =0;i<w.size();i++){
            string t = w[i];
             bool  ans = false;
            
            for(int j = 0;j<w[i].size();j++){
                if(w[i][j] == x)ans = true;
            }
            if(ans == true)res.push_back(i);
        }
        return res;
    }
};