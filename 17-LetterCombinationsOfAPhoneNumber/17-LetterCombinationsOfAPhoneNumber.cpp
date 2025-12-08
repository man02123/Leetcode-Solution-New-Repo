// Last updated: 08/12/2025, 17:40:55
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)
            return {};
            
        unordered_map<int,string> mp;
        mp[2]="abc";
        mp[3]="def";
         mp[4]="ghi";
        mp[5]="jkl";
         mp[6]="mno";
        mp[7]="pqrs";
         mp[8]="tuv";
        mp[9]="wxyz";
        
       vector<string> res=solve(digits,mp); 
        return res;
        
        
    }
    vector<string> solve(string &s, unordered_map<int,string>& mp){
        
        if(s.size()==1){
            vector<string> res;
            for(auto it: mp[s[0]-'0'])
            {
                string r;
                r.push_back(it);
                res.push_back(r);
            }
            return res;
        }
        
        int teval=s.back()-'0';
        s.pop_back();
        vector<string> res1=solve(s,mp);
        vector<string> res2;
        
                for(int i=0;i<mp[teval].size();i++)
                {
                    for(int j=0;j<res1.size();j++)
                    {
                        string y=res1[j];
                        y.push_back(mp[teval][i]);
                        res2.push_back(y);
                    }
                }
           
        
        return res2;
    }
    
};