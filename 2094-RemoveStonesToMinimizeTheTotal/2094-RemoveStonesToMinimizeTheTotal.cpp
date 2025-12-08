// Last updated: 08/12/2025, 17:30:02
class Solution {
public:
    int minStoneSum(vector<int>& p, int k) {
       priority_queue<int> pq;
        for(auto it:p)
            pq.push(it);
    
        // int end=piles.size()-1;
        while(k>0 && pq.size()>0)
        {
            int x=pq.top();
            pq.pop();
            if(x%2==1)
                x=(x/2)+1;
            else
                x=x/2;
            
            pq.push(x);
            k--;
        }
        int sum=0;
        while(pq.size()>0)
        {
            sum+=pq.top();
            pq.pop();
        }
        return sum;
        
    }
};