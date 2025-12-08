// Last updated: 08/12/2025, 17:38:50
class MinStack {
public:
    vector<pair<int,int>> minStack;
    int mini;
    MinStack() {
        mini = INT_MAX-1;
    }
    
    void push(int val) {
        if(minStack.size() > 0) {
          mini = min(mini , val );
          minStack.push_back({val ,  mini});
        }else {
         mini = val;
         minStack.push_back({val ,  mini});
        }
        
    }
    
    void pop() {
        int x = minStack.back().second;
        minStack.pop_back();
        if(x == mini && minStack.size() > 0){
            mini = minStack.back().second;
        }
    }
    
    int top() {
        return minStack.back().first;
    }
    
    int getMin() {
        return  minStack.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */