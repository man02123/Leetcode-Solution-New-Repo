// Last updated: 08/12/2025, 17:38:53
class Solution {
public:
    string reverseWords(string s) {
        int right=s.size()-1;
     int left=s.size()-1;
        string res="";
        
       while(right>=0 && left>=0)
       {
           
           while(right>=0 && s[right]==' ')right--;
           left=right;
           while(left>=0 && s[left]!=' ')left--;
           
           res=res+s.substr(left+1,(right-left))+" ";
               
           right=left;
           
       }
        res.pop_back();
        if(res.back()==' ')res.pop_back();
        return res;
        
    }
};