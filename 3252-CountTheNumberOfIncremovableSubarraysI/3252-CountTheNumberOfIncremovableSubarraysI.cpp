// Last updated: 09/12/2025, 23:21:36
class Solution {
public://map<<vector<int>> st;
    int incremovableSubarrayCount(vector<int>& nums) {
        int ans= 0 ;int n = nums.size();
        
        
        for(int i =0;i<n;i++){
            for(int j =i;j<n;j++){
                vector<int> x;
                
                for(int k =0;k<i;k++){
                    x.push_back(nums[k]);
                }
                for(int k =j+1 ;k<n;k++){
                    x.push_back(nums[k]);
                }
                bool v = 1;
                for(int t=1;t<x.size();t++){
                    if(x[t-1]>=x[t]){
                        v = 0;
                        break;
                    }
                }
                if(v)ans++;
            }
        }
        
        return ans;
    }
    void r (vector<int>& nums){
        
        int l = -1,r =-1;
        
        for(int i =1;i<nums.size();i++){
            
            if(nums[i]>= nums[i-1]){
                l = i;
                break;
            }
        }
        
        
        // vector<int>x ;
        // x.push_back(nums[0]);
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]>nums[i-1])
        //         x.push_back(nums[i]);
        // }
        // st.insert(x);
    }
};