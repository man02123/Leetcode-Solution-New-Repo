// Last updated: 09/12/2025, 23:21:59
class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        bool ans = true;
        auto t = mat;
        
        for(int i =0;i<t.size();i++){
            if(i%2 == 0){
                left(t[i],k);
            }
            else
                right(t[i],k);
        }
    for(int i =0;i<t.size();i++){
        for(int j =0;j<t[i].size();j++){
            if(t[i][j] != mat[i][j])ans = false;
        }
    }
        
        return ans;    
    }
    void right(vector<int> & arr,int k){
        k  = k%arr.size();
        int n = arr.size();
        reverse(arr.begin(), arr.begin() + n - k);
 
    
    reverse(arr.begin() + n - k, arr.begin() + n);
 
   
    reverse(arr.begin(), arr.begin() + n);
        
    }
    void left(vector<int> & arr,int k){
        k  = k%arr.size();
         int p = 1;
        int n = arr.size();
       while (p <= k) {
        int last = arr[0];
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = last;
        p++;
    }
    }
};