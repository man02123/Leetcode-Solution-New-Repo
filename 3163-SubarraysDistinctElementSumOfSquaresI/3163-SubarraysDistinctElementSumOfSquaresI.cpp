// Last updated: 09/12/2025, 23:22:23
class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        
        long long ans = 0;
        for(int i =0;i<n;i++){
            for(int j=i;j<n;j++){
                unordered_map<int,int>st;
                for(int k =i;k<=j;k++){
                    st[nums[k]]++;
                }
                
                    ans+= st.size()*st.size();
            }
        }
        
      return ans;  
    }
};