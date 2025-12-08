// Last updated: 08/12/2025, 17:33:08
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> res;
        int mx=-1;
        res.push_back(-1);
        for(int i=arr.size()-1;i>0;i--)
        {
            mx=max(arr[i],mx);
            res.push_back(mx);   
        }  
        reverse(begin(res),end(res));
        return res;
        
    }
};