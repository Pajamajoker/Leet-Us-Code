class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> q;
    MyStack() {
        // we can do this with only 1 Queue. 2 Not needed
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        int len = q.size();
        q.push(x);
        for(int i = 0; i != len; i++){
            q.push(q.front());
            q.pop();
            // basically add the new element, then pop off all the elements before it and append then behind the new ele. So new ele is in the front of Q i.e. top of "stack"
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int temp = q.front();
        q.pop();
        return temp;
    }
    
    /** Get the top element. */
    int top() {
        return q.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q.empty();
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
