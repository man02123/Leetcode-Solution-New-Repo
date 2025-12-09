// Last updated: 09/12/2025, 23:20:59
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        int ans = 0;
        set<int> st;
        for(auto it : nums){
             if(it < k)return -1;
            if(it > k) st.insert(it);
        }
        return st.size() ;

    }
};