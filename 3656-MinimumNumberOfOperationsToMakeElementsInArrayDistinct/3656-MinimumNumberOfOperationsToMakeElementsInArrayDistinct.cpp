// Last updated: 09/12/2025, 23:20:58
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        int total = nums.size();

        set<int> st;
         int ele = 0; 
        for (int i = total - 1 ;i>= 0 ;i--){

            if( st.find(nums[i]) != st.end() ){
                ele = i;
                int ans = (ele+1)/3  ;
                ans += ((ele+1)%3 > 0) ? 1 : 0;
                return ans;
            }

           st.insert(nums[i]);
        }
    
        return 0;
    }
};