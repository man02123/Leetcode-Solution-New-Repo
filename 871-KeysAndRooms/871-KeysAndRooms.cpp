// Last updated: 08/12/2025, 17:34:39
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& r) {
        vector<int> visited(r.size(),0);
        
        for(auto it:visited)
            if(it==0)
               dfs(r,visited,it);
        
        for(auto it:visited)
            if(it==0)return false;
        
        return true;
    }
    void dfs(vector<vector<int>>& g,vector<int> &visited,int node)
    {
         if(visited[node]==1)return;
        
        visited[node]=1;
        for(int i=0;i<g[node].size();i++)
        {
            if(visited[g[node][i]]==0)
            {
               
                dfs(g,visited,g[node][i]);
            }
        }
    
    }
};