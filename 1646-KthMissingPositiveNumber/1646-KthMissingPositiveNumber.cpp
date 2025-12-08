// Last updated: 08/12/2025, 17:31:35
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l=0,r=arr.size();
        
        int mid=0;
        while(l<r)
        {
            mid=(l+r)/2;
            int ind=(arr[mid]-(mid+1));
            if(ind<k)l=mid+1;
            else r=mid;
            
            
        }
        return k+l;
    }
};