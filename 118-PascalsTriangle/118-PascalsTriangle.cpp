// Last updated: 08/12/2025, 17:39:25
class Solution {
public:
    vector<vector<int>> generate(int n) {
        
        vector<vector<int>> ans;
        ans.push_back({1});
        vector<int> t(1,1);

        while(n>1){
           
           vector<int> temp(t.size() +1  , 1);
            int csum = 0;
           for(int i = 1 ;i<t.size();i++){
             temp[i] = t[i]+t[i-1];
           }
           ans.push_back(temp);
           t = temp;
           n--;
        }
        return ans;
    }
};