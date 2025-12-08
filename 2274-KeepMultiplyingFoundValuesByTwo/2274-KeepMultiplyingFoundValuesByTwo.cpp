// Last updated: 08/12/2025, 17:29:16
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
        unordered_set<int> numsSet;
        
        for(int num : nums)
            numsSet.insert(num);
        
        while(numsSet.find(original) != numsSet.end()) {
            
            original= original * 2;
        }
        
        return original;
    }
};