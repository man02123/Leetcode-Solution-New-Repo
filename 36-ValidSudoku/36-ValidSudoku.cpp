// Last updated: 08/12/2025, 17:40:39
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<string,int> mp;
        //cout<<board[0][0];
        
        for(int i=0;i<9;++i)
        {
            
            for(int j=0;j<9;++j)
            {
                if(board[i][j]!='.')
                {
                string s="row"+to_string(i)+board[i][j];   
                if(mp.find(s)!=mp.end())return false;
                 mp[s]++;
               
                
                 string t="clm"+to_string(j)+board[i][j];
                if(mp.find(t)!=mp.end())return false;
                 mp[t]++;
                
                 string u="box"+to_string((i/3)*3+(j/3))+board[i][j];
                if(mp.find(u)!=mp.end())return false;
                 mp[u]++;
                }  
            }
        }
        return true;
        
    }
};