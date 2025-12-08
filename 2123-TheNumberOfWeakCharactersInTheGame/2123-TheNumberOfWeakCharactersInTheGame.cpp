// Last updated: 08/12/2025, 17:29:50
class Solution {
public:
    static bool comp(vector<int> &a,vector<int> &b)
    {
        if (a[0] == b[0])
          {
               return a[1] > b[1];
          }
          return a[0] < b[0];
        
     
    }
    int numberOfWeakCharacters(vector<vector<int>>& p) {
        sort(p.begin(),p.end(),comp);
    int res=0;  
        int att=p[p.size()-1][0];
        int def=p[p.size()-1][1];
    for(int i=p.size()-2;i>=0;i--)
    {
        if(p[i][1]<def)
        {
            res++;
        }
         def=max(def,p[i][1]);
   
    }
        return res;
    }
};