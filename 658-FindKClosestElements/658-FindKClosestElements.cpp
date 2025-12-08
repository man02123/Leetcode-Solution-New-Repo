// Last updated: 08/12/2025, 17:35:41
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> p;
        int n;
        for(int i=0;i<arr.size();i++)
        { 
           
          p.push({abs(x-arr[i]),arr[i]});
        
                if(p.size()>k)
                    {
                     p.pop();
                    }
        
        }
        vector<int> v;
            while(p.size()!=0)
            {
             
                int k=p.top().second;
                p.pop();
               v.push_back(k);
            }
            
        sort(v.begin(),v.end());
        return v;
    }
};