// Last updated: 10/10/2026, 00:30:37
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
27          // Important ponit 
28        
29    }
30    
31    int top() {
32        return minStack.back().first;
33    }
34    
35    int getMin() {
36        return minStack.back().second;
37    }
38};
39
40/**
41 * Your MinStack object will be instantiated and called as such:
42 * MinStack* obj = new MinStack();
43 * obj->push(value);
44 * obj->pop();
45 * int param_3 = obj->top();
46 * int param_4 = obj->getMin();
47 */