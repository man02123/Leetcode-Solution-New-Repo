// Last updated: 09/12/2025, 23:21:20
class Solution {
public:
    string minimizeStringValue(string s) {
       
        map<char,int>mp;
        for(auto it:s)mp[it]++;
        
        priority_queue< pair<int,char> , vector<pair<int,char>> , greater<pair<int,char>>> pq;
        
        for(auto c = 'a' ; c<='z'; c++){
            pq.push({mp[c] , c});
        }
        
        string t;
        
        for(int j = s.size() ; j>=0 ;j--){
            if(s[j] == '?'){
                char x = pq.top().second;
                int l =  pq.top().first+1;
                pq.pop();
                pq.push({l , x});
                t.push_back(x);
            }
        }
       sort(t.begin() , t.end());
        int ptr = 0;
       for(int i =0;i<s.size();i++){
           if(s[i] == '?'){
               s[i] = t[ptr++];
           }
       }
        
        return s;
    }
};