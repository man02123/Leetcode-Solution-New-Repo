// Last updated: 08/12/2025, 17:32:17
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        priority_queue<pair<int,int>> pq;
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++)
        {
          m[arr[i]]++; 
        }
        for(auto it=m.begin();it!=m.end();it++)
            {
            pq.push({it->second,it->first});
                
            }
       int count=0;
        int n=arr.size();
        while(pq.size()!=0)
        {
         int k=pq.top().first;
            n=n-k;
              count++;
            pq.pop();
            if(n<=(arr.size())/2)
            {
               break;
            }
        }
           
 return count;
        
       
        
    }
};