// Last updated: 08/12/2025, 17:40:17
class Solution {
public:
    vector<vector<int>> generateMatrix(int k) {
        vector<vector<int>> res(k,vector<int>(k,0));
        
        int n=1;
        int lb=0,rb=k-1,tb=0,db=k-1;
        int i,j;
        
        while(lb<=rb && tb<=db)
        {
            for(j=lb;j<=rb;j++)
            { 
                res[tb][j]=n;
                n=n+1;
            }
            tb++;
            
            for(i=tb;i<=db;i++)
                res[i][rb]=n++;
            rb--;
            
            if(tb<=db)
            {
                for(j=rb;j>=lb;j--)
                    res[db][j]=n++;
            }
            db--;
            if(lb<=rb)
            {
                for(i=db;i>=tb;i--)
                    res[i][lb]=n++;
            }
            lb++;
 
        }
        
        
        
        return res;
        
    }
};