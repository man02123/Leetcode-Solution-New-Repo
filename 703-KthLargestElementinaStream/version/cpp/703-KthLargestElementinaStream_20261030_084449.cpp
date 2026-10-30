// Last updated: 30/10/2026, 08:44:49
1class KthLargest {
2public:
3priority_queue<int, vector<int> ,  greater<int>> pq;
4int cap;
5    KthLargest(int k, vector<int>& nums) {
6        cap = k;
7       for(auto it : nums) {
8         pq.push(it);
9         if(pq.size() > k) pq.pop();
10       }
11    }
12    
13    int add(int val) {
14        pq.push(val);
15        if(pq.size() > cap)pq.pop();
16
17        return pq.top();
18    }
19};
20
21/**
22 * Your KthLargest object will be instantiated and called as such:
23 * KthLargest* obj = new KthLargest(k, nums);
24 * int param_1 = obj->add(val);
25 */