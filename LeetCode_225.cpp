class MyStack {
public:
    queue<int>q1,q2;
    int top_stack;
    MyStack() {
        //MyStack ob=new MyStack();
    }
    
    void push(int x) {
        q1.push(x);
        top_stack=x;
    }
    
    int pop() {
        while(q1.size()>1){
            q2.push(q1.front());
            top_stack=q1.front();
            q1.pop();
        }
        int x=q1.front();
        q1.pop();
        q1=q2;
        while(!q2.empty())
            q2.pop();
        return x;
    }
    
    int top() {
        return top_stack;
    }
    
    bool empty() {
        if(q1.empty())
            return true;
        else
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
