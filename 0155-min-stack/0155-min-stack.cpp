class MinStack {
public:
    stack<int>st;
    stack<int>m;
    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value);
        if(m.empty()){
            m.push(value);
        }
        else{
            int a=min(value,m.top());
            m.push(a);
        }
    }
    
    void pop() {
        if(st.empty()) return;
        st.pop();
        m.pop();
    }
    
    int top() {
        if(st.empty()){
            return -1;
        }
        return st.top();
    }
    
    int getMin() {
        if(m.empty()) return -1;
        return m.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */