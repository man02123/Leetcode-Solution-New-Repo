// Last updated: 02/06/2026, 20:06:04
1class Solution {
2public:
3    vector<vector<int>> generate(int n) {
4        vector<vector<int>> ans;
5        vector<int>temp (1,1);
6        n--;
7        ans.push_back(temp);
8
9        while(n){
10            vector<int> ne(temp.size()+1 , 1);
11
12            for(int i =1 ;i<temp.size();i++){
13                ne[i] = temp[i-1]+temp[i];
14            }
15            ans.push_back(ne);
16            temp = ne;
17
18            n--;
19        }
20        return ans;
21    }
22};