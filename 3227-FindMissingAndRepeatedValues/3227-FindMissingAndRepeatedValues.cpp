// Last updated: 09/12/2025, 23:21:51
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& g) {
        
        int m = g.size();
        int n = g[0].size();

        map<int,int> mp ;
    
        for(int i = 0; i< m ;i++){
            for(int j =0 ; j<m ;j++){

             mp[g[i][j]]++;

            }

        }
        int miss = -1;
        int rep = -1;

        for(int i =1 ; i<= (m*m) ; i++){
            if(mp[i] == 0) miss = i;
            if(mp[i] == 2) rep = i;
        }
        return {rep ,  miss };
    }
};