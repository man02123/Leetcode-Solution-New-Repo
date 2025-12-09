// Last updated: 09/12/2025, 23:21:35
class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(begin(nums),end(nums));
        long long ans = -1;
        
        long long sum = 0;
        vector<long long> p;
        p.push_back(0);
        
        for(int i =0;i<nums.size();i++){
            sum+=nums[i];
            p.push_back(sum);
        }
        for(int i =nums.size()-1;i>=0;i--){
            if(p[i] > nums[i])return p[i+1];
        }
       
        return ans;
    }
};