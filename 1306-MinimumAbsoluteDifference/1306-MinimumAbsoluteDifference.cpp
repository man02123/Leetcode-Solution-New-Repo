// Last updated: 08/12/2025, 17:32:55
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> res;
        sort( begin(arr),end(arr));
        int md=INT_MAX;
        for(int i=1;i<arr.size();i++)
        {
            md=min(md,arr[i]-arr[i-1]);
        }
        
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]-arr[i-1]==md)
            res.push_back({arr[i-1],arr[i]});
            
        }
        return res;
        
    }
};