// Last updated: 08/12/2025, 17:37:19
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> pq;
        int n=matrix.size();
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<n;++j)
            {
                int s=matrix[i][j];
              pq.push(s) ;
                if(pq.size()>k)
                    pq.pop();
            }
        }
        return pq.top();
        
    }
};