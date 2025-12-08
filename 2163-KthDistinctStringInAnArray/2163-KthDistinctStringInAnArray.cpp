// Last updated: 08/12/2025, 17:29:43
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;
        for(int i=0;i<arr.size();++i)
        {
            mp[arr[i]]++;
        
        }
       
        for(auto it:arr)
        {
            if(mp[it]==1)
            {
              k--;
               
            }
           
               
            if(k==0)
                return it;
            
            
        }
        return "";
        
    }
};