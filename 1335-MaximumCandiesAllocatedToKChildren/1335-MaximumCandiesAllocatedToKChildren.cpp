// Last updated: 08/12/2025, 17:32:47
class Solution {
public:
    int maximumCandies(vector<int>& c, long long k) {
        long long l=1;
        long  long r=*max_element(c.begin(),c.end());
        
        long long res=0;
        while(l<=r)
        {
            long long mid=l+(r-l)/2;
            
            long long cand=0;
            for(int i=0;i<c.size();i++)
                cand+=(c[i]/mid);       //+(c[i]);
            
            if(cand>=k)
            {
                res=max(res,cand);
                l=mid+1;
            }
            else 
                r=mid-1;
          
            
        }
        
        return r;
        
    }
};