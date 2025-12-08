// Last updated: 08/12/2025, 17:40:19
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        int ind=lower_bound(intervals.begin(),intervals.end(),newInterval)-intervals.begin();
        
        if(ind==0)res.push_back(newInterval);
        else 
        res.push_back(intervals[0]);
            
            for(int i=1;i<ind;i++)
            {
                if(res.back()[1]<intervals[i][0])res.push_back(intervals[i]);
                else if(res.back()[1]>=intervals[i][0])
                {
                    res.back()[0]=min(res.back()[0],intervals[i][0]);
                    res.back()[1]=max(res.back()[1],intervals[i][1]);
                }
            }
          
        if(newInterval[0]>res.back()[1])res.push_back(newInterval);
        else if(newInterval[0]<=res.back()[1])
        {
            res.back()[0]=min(res.back()[0],newInterval[0]);
            res.back()[1]=max(res.back()[1],newInterval[1]);
        }
        
         for(int i=ind;i<intervals.size();i++)
            {
                if(res.back()[1]<intervals[i][0])res.push_back(intervals[i]);
                else if(res.back()[1]>=intervals[i][0])
                {
                    res.back()[0]=min(res.back()[0],intervals[i][0]);
                    res.back()[1]=max(res.back()[1],intervals[i][1]);
                }
            }
        
        
            
            
           return res; 
        }

};