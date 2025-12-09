// Last updated: 09/12/2025, 23:24:24
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        
        if(skill.size()==2)return (skill[0]*skill[1]);
        int n=skill.size();
        
        
        sort(skill.begin(),skill.end());
        long long res=0;
        int test=skill[0]+skill[n-1];
        
        for(int i=0;i<(n/2);i++)
        {
           // cout<<skill[i]+skill[n-i-1];
            
            if(skill[i]+skill[n-i-1]!=test)return -1;
            res+=(skill[i]*skill[n-i-1]);
        }
        return res;
    }
};