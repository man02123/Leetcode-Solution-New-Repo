// Last updated: 08/12/2025, 17:38:42
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> s;
        for(auto it:nums)
            s.emplace_back(to_string(it));
       
        sort(s.begin(),s.end(),comp);
        // for(auto it:s)
        //     for(auto it1:it)cout<<it1;
        string res;
        for(auto it:s)
        {
            res+=it;
        }
       if(res[0]=='0')return "0";
        
        return res;
        
       // return 0;
        
    }
    static bool comp(string &a,string &b)
    {      
            return a+b>b+a;
           
       }
        
       // return true; 
    
};