// Last updated: 08/12/2025, 17:35:01
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0  , r = nums.size()-1;

        return recur(0 , r , target , nums);
    }
    int recur(int l ,  int r ,  int tar , vector<int> &nums){
    if(l > r)return -1;

    int mid = (l+r)/2;
    if(nums[mid] == tar){
        return mid;
    }
    if(nums[mid] > tar) return recur(l , mid-1 ,tar , nums);
    else return recur(mid+1 , r ,tar , nums);
}

    //     while( l <= r){
    //         int mid = (l+r)/2;

    //         if(nums[mid] == target) return mid;

    //         if(nums[mid] > target) r = mid-1;
    //         else 
    //         l = mid+1;
    //     }
    //     return -1;
    // }
};
