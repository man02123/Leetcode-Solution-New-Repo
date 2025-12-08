// Last updated: 08/12/2025, 17:34:47
class Solution {
public:vector<vector<int>> result;
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& g) {
        vector<int> visited(g.size(),0);
        vector<int> temp;
        
        temp.push_back(0);
        dfs(g,visited,temp,0);
        
        return result;
        
    }
    void dfs(vector<vector<int>>& g,vector<int> &visited ,vector<int> temp,int node)
    {
        
        if(visited[node]==1)
            return;
        
        if(node==g.size()-1)
        {
            result.push_back(temp);
            return;
        }
        
        visited[node]=1;
        
        for(int i=0;i<g[node].size();i++)
        {
           if(visited[g[node][i]]==0)
           {
              // cout<<g[node][i];
               temp.push_back(g[node][i]);
               //visited[i]=1;
               dfs(g,visited,temp,g[node][i]);
               temp.pop_back();
              // visited[i]=0;
              //temp.pop_back();
           }
        }
        visited[node]=0;
 
    }
};