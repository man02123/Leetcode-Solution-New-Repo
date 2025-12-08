// Last updated: 08/12/2025, 17:29:36
 #define ll long long int
class Solution {
public:
    int maximumDetonation(vector<vector<int>>& b) {
        int n  =b.size();
vector<vector<int> > graph(n);
        for(int i=0;i<n;i++)
        {
            ll x1,y1,r1;
            x1=b[i][0];
            y1=b[i][1];
            r1=b[i][2];
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                     ll x2,y2,r2;
                     x2=abs(x1-b[j][0]);
                     y2=abs(y1-b[j][1]);
                    if(x2*x2+y2*y2<=r1*r1)
                    {
                        graph[i].push_back(j);
                    }
                }
            }
        }
        
        
        
        int maxi = INT_MIN;
        
        for(int i  =0;i<b.size();i++)
        {
            int cnt = 0;
             vector<int> vis(b.size(),0);
                dfs(graph,i,vis,cnt);
            maxi = max(maxi,cnt);
        }
        
        
        
        return maxi;
        
    }
    void dfs(vector<vector<int>> &graph , int node,vector<int> &vis ,int &cnt)
    {
        cnt++;
        vis[node] = 1;
        for(auto it:graph[node])
        {
            if(vis[it]==0)
            {
                dfs(graph,it,vis,cnt);
            }
       
        }
        return;
    }
};



// class Solution {
// #define ll long long int
//     public:
//     void dfs(vector<vector<int>> &graph,vector<bool> &visited,int &c,int &i)
//     {
//         visited[i]=true;
//         c++;
//         for(int j=0;j<graph[i].size();j++)
//         {
//             if(!visited[graph[i][j]])
//              dfs(graph,visited,c,graph[i][j]);   
//         }
//     }
//     int maximumDetonation(vector<vector<int>>& bombs) {

//         int n=bombs.size();
//         vector<vector<int> > graph(n);
//         for(int i=0;i<n;i++)
//         {
//             ll x1,y1,r1;
//             x1=bombs[i][0];
//             y1=bombs[i][1];
//             r1=bombs[i][2];
//             for(int j=0;j<n;j++)
//             {
//                 if(i!=j)
//                 {
//                      ll x2,y2,r2;
//                      x2=abs(x1-bombs[j][0]);
//                      y2=abs(y1-bombs[j][1]);
//                     if(x2*x2+y2*y2<=r1*r1)
//                     {
//                         graph[i].push_back(j);
//                     }
//                 }
//             }
//         }
        
//         for(auto it:graph)
//         {
//             for(auto it2:it)
//                 cout<<it2;
//             cout<<endl;
//         }
        
//         int ans=INT_MIN;
//         for(int i=0;i<n;i++)
//         {
//             int c=0;
//             vector<bool> visited(n,false);
//             dfs(graph,visited,c,i);
//             ans=max(ans,c);
//         }
//         return ans;
//     }
// };