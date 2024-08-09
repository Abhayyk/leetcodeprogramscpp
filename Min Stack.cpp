class MinStack {
public:
vector<int> st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push_back(val);
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        return st[0];
    }
    
    int getMin() {
        stack<int> cpy;
        cpy=st;
        int min=INT_MAX;
        while(!cpy.empty())
        {
          if(cpy.top() < min)
            min=cpy.top();
         cpy.pop();
        }
        return min;

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
