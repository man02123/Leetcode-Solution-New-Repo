// Last updated: 08/12/2025, 17:31:50
class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
       
        sort(arr.begin(),arr.end());
        vector<int> res;
        int med=arr[(arr.size()-1)/2];
        int i=0,j=arr.size()-1;
        while(k!=0)
        {
            if(abs(arr[j]-med)>=abs(arr[i]-med))
            { 
                res.push_back(arr[j]);
                k--;
                j--;
                
            }
            else if(abs(arr[j]-med)<abs(arr[i]-med))
            {
               res.push_back(arr[i]);
                k--;
                i++;    
            }  
           
        }
        return res;
        
        
        
    }
};