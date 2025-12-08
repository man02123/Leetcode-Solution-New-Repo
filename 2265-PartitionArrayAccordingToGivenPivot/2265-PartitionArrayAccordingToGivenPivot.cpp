// Last updated: 08/12/2025, 17:29:20
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int p) {
        
    
        vector<int> ans;
        int n = nums.size();
        int cnt = 0;

        for(int i = 0 ; i< n ; i++ ){

            if(nums[i] < p){
                ans.push_back(nums[i]);
            }
            else if(nums[i] == p)cnt++;
            else
             nums.push_back(nums[i]);

        }
        while(cnt > 0)ans.push_back(p) , cnt--;

        for(int i = n ;i <nums.size();i++)
        ans.push_back(nums[i]);

        return ans;
    }
};