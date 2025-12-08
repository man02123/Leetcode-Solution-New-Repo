// Last updated: 08/12/2025, 17:30:44
class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int> pq;
    
        
        pq.push(b);
        pq.push(a);
        pq.push(c);
        int res=0;
       
        while(pq.top()!=0)
        {
             int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            if(y==0)return res;
            pq.push(x-1);
            pq.push(y-1);
            res++;
        }
     
      return res;  
        
    }
};