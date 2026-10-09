// Last updated: 10/10/2026, 00:30:11
1class MinStack {
2public: 
3    vector<pair<int,long long>> minStack;
4    long long mini;
5    MinStack() {        
6        mini = LONG_MAX;                                                  
7    }
8    
9    void push(int value) {
10
11        if(value <= mini) {
12           mini = value;
13        }
14
15        minStack.push_back({value  ,  mini});
16    }
17    
18    void pop() {
19        
20          minStack.pop_back();
21
22          if(minStack.size() > 0 )
23          mini = minStack.back().second;
24          else 
25          mini = LONG_MAX;
26        
27    }
28    
29    int top() {
30        return minStack.back().first;
31    }
32    
33    int getMin() {
34        return minStack.back().second;
35    }
36};
37
38/**
39 * Your MinStack object will be instantiated and called as such:
40 * MinStack* obj = new MinStack();
41 * obj->push(value);
42 * obj->pop();
43 * int param_3 = obj->top();
44 * int param_4 = obj->getMin();
45 */