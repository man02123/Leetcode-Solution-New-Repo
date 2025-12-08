// Last updated: 08/12/2025, 17:38:11
class MyQueue {
public:\
    stack<int> s;
    MyQueue() { 
    }
    
    void push(int x) {
        s.push(x);  
    }
    
    int pop() {
        stack<int> temp;
        while(s.size()>1)
        {
            temp.push(s.top());
            s.pop();
        }
        int x=s.top();
        s.pop();
        while(temp.size()>0)
        {
            s.push(temp.top());
            temp.pop();
        }
        
        
       return x;
    }
    
    int peek() {
        
          stack<int> temp;
          temp=s;
          while(temp.size()>1)
              temp.pop();
      return temp.top();
    }
    
    bool empty() {
        if(s.size()==0)return true;
        return false;
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */