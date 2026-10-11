// Last updated: 12/10/2026, 00:47:37
1class StockSpanner {
2public:
3    stack<pair<int , int>> st;
4    int curr;
5    StockSpanner() {
6        curr = 0;
7    }
8    
9    int next(int price) {
10    int ans = 1;   
11
12     while(st.size() > 0 && price >= st.top().first) {
13          st.pop();
14         }
15
16         curr++;
17        
18        if(st.size() == 0) {
19            st.push({price , curr});
20            return curr;
21        }
22        else{
23         ans = curr-st.top().second;
24         st.push({price ,  curr});
25        }
26
27        return ans;
28
29    }
30};
31
32/**
33 * Your StockSpanner object will be instantiated and called as such:
34 * StockSpanner* obj = new StockSpanner();
35 * int param_1 = obj->next(price);
36 */