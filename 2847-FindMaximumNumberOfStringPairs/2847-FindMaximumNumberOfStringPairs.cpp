// Last updated: 09/12/2025, 23:22:51
class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& w) {
        int n = w.size();
        int cnt = 0;
        
        for(int i = 1;i<n;i++)
        {
            for(int j = 0;j<i;j++){
                string x = w[i];
                string y = w[j];
                reverse(y.begin(),y.end());
                
                if(x==y)cnt++;
            }
        }
        return cnt;
    }
};