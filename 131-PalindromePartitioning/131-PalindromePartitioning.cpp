// Last updated: 08/12/2025, 17:39:11
class Solution {
    vector<vector<string>> solutionSet;
public:
    vector<vector<string>> partition(string s) {
        
        vector<string> ans;
        recur(s , 0 , ans );
        return solutionSet;
    }

void recur(string &s ,  int ind , vector<string> & ans) {
    if( ind >= s.size() ){
    solutionSet.push_back(ans);
    return;
    }

  for(int part = ind ; part < s.size() ; part++) {
     if(isPal(s , ind, part)){
        ans.push_back(s.substr(ind , part-ind+1));
        recur(s , part+1, ans);
        ans.pop_back();
     }
  }

} 

bool isPal(string &s  ,int start ,  int end) {
    int i = start , j = end;
    while(i <= j ){
        if(s[i] != s[j])return false;
        i++; j--;
    }
    return true;
}

};
