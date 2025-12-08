// Last updated: 08/12/2025, 17:40:29
class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> permuteUnique(vector<int>& nums) { 
        sort(nums.begin(),nums.end());
        
      solve(nums,0); 
        return res;
    }
    
void solve(vector<int> nums,int ind){
    
       if(ind==nums.size())
       {
           res.push_back(nums);
       }
    
    for(int i=ind;i<nums.size();i++){
        
        if( i!=ind && nums[i]==nums[ind]) continue; 
        
        
            swap(nums[i],nums[ind]);
              solve(nums,ind+1);
        
      
    }
  
}
};
// class Solution {
// public:
//     vector<vector<int>> permuteUnique(vector<int>& nums) {
//         vector<vector<int>> output;
//         sort(begin(nums), end(nums));
//         generatePermutations(nums, output, 0);
//         return output;
//     }
// private:
//     void generatePermutations(vector<int> nums, vector<vector<int>>& output, int idx) {
//         if (idx == size(nums)) {
//             output.emplace_back(nums);
//         }
//         for (int i = idx; i < size(nums); ++i) {
//             if (i != idx && nums[i] == nums[idx]) continue;
//             swap(nums[i], nums[idx]);
//             generatePermutations(nums, output, idx + 1);
//         }
//     }
// };