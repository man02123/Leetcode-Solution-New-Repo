// Last updated: 08/12/2025, 17:33:51
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
         priority_queue<vector<int>> pq;
        for(int i=0;i<points.size();++i)
            {
            int l=pow(points[i][0],2)+pow(points[i][1],2);
            
                pq.push({l,points[i][0],points[i][1]});
            if(pq.size()>k)
                pq.pop();
                
            }
         vector<vector<int>> v;
        
        while(pq.size()!=0)
        {
            
         v.push_back({pq.top()[1],pq.top()[2]});
            pq.pop();
        }
        return v;
        
    }
};