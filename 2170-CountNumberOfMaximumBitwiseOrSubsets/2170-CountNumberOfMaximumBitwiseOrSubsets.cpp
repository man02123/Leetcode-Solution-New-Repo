// Last updated: 08/12/2025, 17:29:42
class Solution {
public:
    map<int,int> mp;

    int countMaxOrSubsets(vector<int>& nums) {
        generate(nums,0 ,0);
        int ans = INT_MIN;
        int cnt = 0;

        for(auto it : mp) {
           if(it.first > ans) {
              cnt = it.second;
              ans = it.first;
           }
        }
        return cnt;
    }
    void generate (vector<int>& nums ,  int ind ,  int res) {

        if(nums.size() < ind)return;

        if(nums.size() == ind){
             mp[res]++;
             return;
        }
        
        int tres = res;
        res = res | nums[ind];

        generate(nums, ind+1 , res); 
        generate(nums, ind+1 , tres); 
    }
};