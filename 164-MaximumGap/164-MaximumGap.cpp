// Last updated: 08/12/2025, 17:38:46
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        priority_queue<int> pq;
        sort(nums.begin(),nums.end());
        if(nums.size()==1)
            return 0;
         if(nums.size()==2)
            return (nums[1]-nums[0]);
       
        for(int i=0,j=i+1;i<nums.size()-1,j<nums.size();++i,++j)
        {
            
            pq.push(abs(nums[j]-nums[i]));
        }
        return pq.top();
        
    }
};