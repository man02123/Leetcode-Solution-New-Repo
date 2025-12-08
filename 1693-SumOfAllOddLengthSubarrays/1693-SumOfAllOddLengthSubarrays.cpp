// Last updated: 08/12/2025, 17:31:21
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int res=0;
        for(int i=0;i<arr.size();i++)
        {
            int st=arr.size()-i;
            int end=i+1;
            int tot=st*end;
            if(tot%2==0)tot=tot/2;
            else tot=(tot/2)+1;
            
            res+=tot*arr[i];
                
        }
       return res; 
    }
};