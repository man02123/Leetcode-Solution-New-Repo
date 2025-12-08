// Last updated: 08/12/2025, 17:36:14
class Solution {
public:
    int findMinDifference(vector<string>& t) {
        vector<int> v;
       for(int i=0;i<t.size();i++)
       {
           int tm=(stoi(t[i].substr(0,2))*60);
               int tt=stoi(t[i].substr(3,2));
            v.push_back(tt+tm); 
       }
        int res=INT_MAX;
        sort(v.begin(),v.end());
        
        v.push_back(v[0]+24*60);
        for(int i=1;i<v.size();i++)
            res=min(res,v[i]-v[i-1]);
     
        return res;
    }
};