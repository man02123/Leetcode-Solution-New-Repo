// Last updated: 08/12/2025, 17:30:50
class Solution {
public:
   static bool comp(vector<int>&a,vector<int>&b)
    {
    return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& b, int ts) {
        sort(b.begin(),b.end(),comp);
        int res=0;
        
        for(int i=0;i<b.size();i++)
        {
        
            if(b[i][0]<=ts)
            {
                res+=b[i][0]*b[i][1];
                ts-=b[i][0];
            }
            else if(b[i][0]>ts)
            {
                res+=ts*b[i][1];
                ts=0;
            }
            
            if(ts==0)return res;
               
        }
        return res;
        
    }
};