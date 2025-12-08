// Last updated: 08/12/2025, 17:29:12
class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double> pq(begin(nums), end(nums));
       
        double sum=0;
     for(int i=0;i<nums.size();i++)
         sum+=nums[i];
        
        double tempsum=sum/2;
         int cnt=0;
        
        while( tempsum>0)
        {
            double x=pq.top();
            pq.pop();
           tempsum-=x/2;
           pq.push(x/2);
           cnt++; 
        }
        return cnt;
    }
};