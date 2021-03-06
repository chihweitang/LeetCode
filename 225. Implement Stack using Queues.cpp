class MyStack {
public:
    /** Initialize your data structure here. */
    // MyStack() {
    //     std::queue<int> que;
    // }
    std::queue<int> que;
    
    
    /** Push element x onto stack. */
    void push(int x) {
        que.push(x);
        for(int i=0; i<que.size()-1; ++i){
            que.push(que.front());
            que.pop();
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int t = que.front();
        que.pop();
        return t;
    }
    
    /** Get the top element. */
    int top() {
        return que.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return que.empty();
    }
};


/*
top --> bottom

eg. push 1, 2, 3

1
2, 1
3, 2, 1
*/

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
