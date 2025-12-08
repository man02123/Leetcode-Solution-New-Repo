// Last updated: 08/12/2025, 17:33:11
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> mp;
        for(auto it:arr1)
            mp[it]++;
        vector<int> v,v2;
    for(int i=0;i<arr2.size();++i)
    {
        if(mp.find(arr2[i])!=mp.end())
        {
            int k=mp[arr2[i]];
            while(k!=0)
            {
                v.push_back(arr2[i]);
                k--;
            }
            mp.erase(arr2[i]);  
        }
        
    }
        for(auto it=mp.begin();it!=mp.end();++it)
        {
            int k=it->second;
            while(k!=0)
            {
             v2.push_back(it->first);
                k--;
            }
            
        }
        sort(v2.begin(),v2.end());
        for(auto it:v2)
            v.push_back(it);
        return v;
        
    }
};