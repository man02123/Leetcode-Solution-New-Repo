// Last updated: 09/12/2025, 23:21:32
class Solution {
public:set<pair<int,int>> st;
    set<pair<pair<int,int> ,pair<int,int>>> st2;
    
    bool c(pair<int,int> a , pair<int,int> b){
        int x1  = a.first;
        int y1 = a.second;
        int x2  = b.first;
        int y2 = b.second;
         if(x1 > x2)return false;
          if(y1<y2)return false;
        if((x1==x2) && (y1==y2))return false;
       
        //cout<<x1<<y1<<" "<<x2<<y2;
        set<pair<int,int>> st3 ={a,b};
        
        for(int i =min(x1,x2) ; i<=max(x2,x1);i++){
            
            for(int j =min(y1,y2) ; j<=max(y1,y2);j++){
                //if((make_pair(i,j) == a) || (make_pair(i,j) == b))continue;
                //if(st3.find({i,j}) !=st3.end())continue;
                
               if((st.find({i,j}) !=st.end()) && ((make_pair(i,j)!=a)  && (make_pair(i,j)!=b)))
                   //cout<<i<<j<<" ";
                   return false;
            }
        } 
       st2.insert({a,b});
        return true;
        
    }
    int numberOfPairs(vector<vector<int>>& p) {
       int n  = p.size();
        //sort(begin(p), end(p));
        
        
        for(auto it:p)st.insert({it[0] , it[1]});
        int ans = 0;
        for(int i =0;i<n;i++){
            
            for(int j =0;j<n;j++){
                if(i!=j){
                if(c ({p[i][0] ,p[i][1]} , {p[j][0],p[j][1]}) )ans++;
                }
            }
        }
        return ans;
        
    }
};
//[[0,1],[0,2],[0,4]]
//2
