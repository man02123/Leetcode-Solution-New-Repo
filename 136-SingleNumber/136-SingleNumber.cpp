// Last updated: 08/12/2025, 17:39:07
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int myxor = 0;
       for (auto it: nums){
        myxor ^= it;
       } 

       return myxor;
    }
};