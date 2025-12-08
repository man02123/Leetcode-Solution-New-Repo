// Last updated: 08/12/2025, 17:34:06
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i=0;
        if(arr.size()==1)
             return false;
            if(arr[0]>arr[1])
            return false;
        while(i<arr.size() && arr[i]<arr[i+1])
            ++i;
        if(i==arr.size()-1)
            return false;
        
        while(i<arr.size()-1 && arr[i]>arr[i+1])
            ++i;
        if(i==arr.size()-1)
            return true;
        
        return false;
        
    }
};