// Last updated: 09/12/2025, 23:24:22
class Solution {
public:
    int maxJump(vector<int>& s) {
        int ans=abs(s[0]-s[1]);
        //int ind=1;
        for(int i=2;i<s.size();i++)
        {
            int temp=abs(s[i]-s[i-2]);
                 ans=max(temp,ans);
               
        }
//         cout<<ind;
//         s.erase(s.begin()+ind);
        
//         for(int i=1;i<s.size();i++)
//         {
//             ans=max(s[i]-s[i-1],ans);
//         }
        return ans;
        
    }
};