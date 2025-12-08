// Last updated: 08/12/2025, 17:29:52
class Solution {
public:
	int countKDifference(vector<int>& nums, int k) {
		int res = 0;
		unordered_map<int, int> m; 
		for(int i = 0; i < nums.size(); i++){
			res += (m[nums[i] - k] + m[nums[i] + k]);
			m[nums[i]]++;
		}
		return res;
	}
};