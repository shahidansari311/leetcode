class MyStack {
public:
    queue<int>q1;
    queue<int>q2;
    MyStack() {
        
    }
    
    void push(int x) {
        if(q2.empty()){
            q1.push(x);
            return;
        }
        else{
            q2.push(x);
        }
    }
    
    int pop() {
        int ans;
        if(q2.empty()){
            while(q1.size()!=1){
                q2.push(q1.front());
                q1.pop();
            }
            ans=q1.front();
            q1.pop();
            return ans;
        }
        else if(q1.empty()){
            while(q2.size()!=1){
                q1.push(q2.front());
                q2.pop();
            }
            ans=q2.front();
            q2.pop();
            return ans;
        }else{
            return -1;
        }
    }
    
    int top() {
        int ans;
        if(q2.empty()){
            return q1.back();
        }
        else if(q1.empty()){
            return q2.back();
        }else{
            return -1;
        }
    }
    
    bool empty() {
       if(q1.empty() && q2.empty()) return true;
       return false; 
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */