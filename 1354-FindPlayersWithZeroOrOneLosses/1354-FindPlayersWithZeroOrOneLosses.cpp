// Last updated: 08/12/2025, 17:32:44
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> win,lose;
        vector<vector<int>> res;
        sort(begin(matches),end(matches));
       for(int i=0;i<matches.size();i++)
       {
           win[matches[i][0]]++;
           lose[matches[i][1]]++;
           
       }
//         for(auto it:win)
//             cout<<it.first<<" ";
        
        vector<int> wn;
        vector<int> ls;
        set<int>st;
       for(int i=0;i<matches.size();i++)
       {
           if(win[matches[i][0]]>0 && lose.find(matches[i][0])==lose.end())
           {
               wn.push_back(matches[i][0]);
               win[matches[i][0]]=0;
           }
           
           if(lose[matches[i][1]]==1)
           {
               st.insert(matches[i][1]);
           }
       }
       res.push_back(wn);
           
           for(auto it:st)ls.push_back(it);
        
        res.push_back(ls);
       
        return res;
    }
};