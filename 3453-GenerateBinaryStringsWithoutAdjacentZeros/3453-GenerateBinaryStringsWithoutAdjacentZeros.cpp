// Last updated: 09/12/2025, 23:21:06
class Solution {
public:
    vector<string>  ans;
    vector<string> validStrings(int n) {
       
        gen(n-1,"0");
        gen(n-1,"1");
         return ans;
    }
    void gen(int n ,  string temp ){
        
        if(n == 0){
            ans.push_back(temp);
            return;
        }
        if(temp.back() == '0'){
            temp.push_back('1');
            gen(n-1 , temp);
        }
        else{
            temp.push_back('1');
            gen(n-1 , temp);
            temp.pop_back();
            temp.push_back('0');
            gen(n-1,temp);
        }
        
    }
};