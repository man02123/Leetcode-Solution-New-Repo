// Last updated: 08/12/2025, 17:40:42
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
         int l = 0;
         int r = nums.size()-1;
        
        int left = low_bnd(nums ,  l , r , t); 
        int right =  upp_bnd(nums ,  l , r , t);

        return {left ,  right};
    }

    private :
     int low_bnd (vector<int>& nums ,  int l , int r , int tar){
        int ans = -1;
         while(l<=r){

            int mid = (l+r)/2;
            if(nums[mid] == tar){
                r = mid -1;
                ans = mid;
            }
            else if(nums[mid] > tar){
                r = mid-1;
            }
            else 
            l = mid+1;

         }
         return ans;
     }
     int upp_bnd (vector<int>& nums ,  int l , int r , int tar){
            
             int ans = -1;
         while(l<=r){

            int mid = (l+r)/2;
            if(nums[mid] == tar){
                l = mid + 1;
                ans = mid;
            }
            else if(nums[mid] > tar){
                r = mid-1;
            }
            else 
            l = mid+1;

         }
         return ans;

     }

};