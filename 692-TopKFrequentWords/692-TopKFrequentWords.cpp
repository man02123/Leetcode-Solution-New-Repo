// Last updated: 08/12/2025, 17:35:31
class Solution {
public:
    struct comp
    {
        bool operator()(pair<int,string> &a,pair<int,string> &b)
        {
            if(a.first==b.first)
            {
                return a.second<b.second;
            } 
            else  
                return a.first>b.first;
        }
    };
    
    
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        for(auto it:words)
            mp[it]++;
        priority_queue<pair<int,string>,vector<pair<int,string>>,comp> pq;
        
        for(auto it:mp)
        {
            pair<int,string> temp;
            temp.first=it.second;
            temp.second=it.first;
            pq.push(temp);
        }

        while(pq.size()!=k)
        {
            pq.pop();
        }
           
       vector<string> res;
        while(pq.size()!=0)
        {
            string s=pq.top().second;
            res.push_back(s);
            pq.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};