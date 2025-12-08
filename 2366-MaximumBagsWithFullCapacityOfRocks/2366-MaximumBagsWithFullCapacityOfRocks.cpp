// Last updated: 08/12/2025, 17:29:00
class Solution {
public:
    int maximumBags(vector<int>& cap, vector<int>& r, int add) {
        for(int i=0;i<cap.size();i++)
        {
            if(i<r.size())
            {
                cap[i]=cap[i]-r[i];
                continue;
            }
            break;
        }
       sort(cap.begin(),cap.end());
        
        int res=0;
        for(int i=0;i<cap.size();i++)
        {
            if(cap[i]==0)
            {
                res++;continue;
            }
            if(cap[i]<=add)
            {
              add=add-cap[i];
                res++;
            }
            else 
                break;
        }
        return res;
        
    }
};