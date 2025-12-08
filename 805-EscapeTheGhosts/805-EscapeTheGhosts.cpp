// Last updated: 08/12/2025, 17:34:51
class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& gh, vector<int>& target) {
        int minx=abs(gh[0][0]-target[0]),miny=abs(gh[0][1]-target[1]);
        int ans=0;
        int i;
        for( i=0;i<gh.size();i++)
        {
            if(minx>abs(gh[i][0]-target[0]) && miny>abs(gh[i][1]-target[1]))
            {     
             minx=min(abs(gh[i][0]-target[0]),minx);
             miny=min(abs(gh[i][1]-target[1]),miny);
                ans=i;
            }
            
        }
        int distgh=abs(gh[ans][0]-target[0])+abs(gh[ans][1]-target[1]);
        int dip=abs(target[0]-0)+abs(target[1]-0);
        if(distgh>dip)return true;
        
         //cout<<ans;
        // if(abs(gh[ans][0]-target[0])>=target[0] && abs(gh[ans][1]-target[1])>=target[1])return true;
        return false;
        
    }
};