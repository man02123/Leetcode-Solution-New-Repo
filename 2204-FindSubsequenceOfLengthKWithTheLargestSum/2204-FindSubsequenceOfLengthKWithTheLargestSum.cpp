// Last updated: 08/12/2025, 17:29:37
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        pair<int,int> p;
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<size(nums);i++)
        { 
            p={nums[i],i};
            pq.push(p); 
        }
        vector<pair<int,int>>res;
        
        while(k>0)
        {
            pair<int,int>temp;
            temp={pq.top().second,pq.top().first};
            res.push_back(temp);
            pq.pop();
            k--;
            
        }
        sort(begin(res),end(res));
        nums.clear();
        vector<int>res1;
        for(auto it:res)
            nums.push_back(it.second);
        return nums;
        
    }
};