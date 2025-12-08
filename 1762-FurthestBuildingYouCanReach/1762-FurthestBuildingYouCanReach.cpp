// Last updated: 08/12/2025, 17:31:08
class Solution {
public:
    int furthestBuilding(vector<int>& nums, int bricks, int ladders) {
        priority_queue<int>pq;
        int i;
        for( i=1;i<nums.size();i++)
        {
            int diff=nums[i]-nums[i-1];
            if(diff<=0)continue;
            
           if(diff<=bricks )
           {
               bricks-=diff;
               pq.push(diff);
           }
            else if(ladders>0)
            {
                if(pq.size()>0)
                {
                int x=pq.top();
                if(x>diff)
                {
                    bricks+=x;
                    pq.pop();
                    pq.push(diff);
                    bricks-=diff;
                    
                }
                }
                ladders--; 
                
            }
            else break;   
        }
     return i-1;  
    }
};