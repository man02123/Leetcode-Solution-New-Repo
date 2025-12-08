// Last updated: 08/12/2025, 17:35:06
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        
        vector<int> sum=arr;
        sort(sum.begin(),sum.end());
        
        int psum=0,osum=0;
        int n=arr.size();
        int res1=1;
        for(int i=0;i<arr.size()-1;i++)
        {
            psum+=sum[i];
            osum+=arr[i];
            
            if(psum==osum)
            res1++;
        }
                     
     return res1;
    }
 
};