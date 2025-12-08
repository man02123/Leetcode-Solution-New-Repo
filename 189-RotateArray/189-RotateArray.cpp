// Last updated: 08/12/2025, 17:38:38
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    k = k%nums.size(); 
    int n = nums.size();

    auto itr = nums.begin()+n-k;
    auto itr2 = nums.begin()+n-k;

    reverse(nums.begin() , itr );
    reverse(itr2 ,nums.end() );
    reverse(nums.begin() ,nums.end() );
    

    }
};