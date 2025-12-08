// Last updated: 08/12/2025, 17:40:34
class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> ml,mr;
        int n=height.size();
        int max1=height[0];
        for(int i=0;i<height.size();++i)
        {
            if(height[i]>max1)
            {
                max1=height[i];
                ml.push_back(max1);    
            }
            else
                ml.push_back(max1);
        }//to maintain maxleft
        max1=height[n-1];
         for(int i=n-1;i>=0;i--)
        {
            if(height[i]>max1)
            {
                max1=height[i];
                mr.push_back(max1);    
            }
            else
                mr.push_back(max1);
        }
        reverse(mr.begin(),mr.end());
        int res=0;
        for(int i=1;i<n-1;i++)
        {
            res=res+min(ml[i],mr[i])-height[i];

        }
        return res;
        
        
    }
};