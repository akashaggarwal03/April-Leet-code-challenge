class MinStack {
    
    stack<int>st;
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        
        if(!st.empty())
        {
            int temp=st.top();
            st.push(x);
            if(x<temp)
                st.push(x);
            else
                st.push(temp);
        }
        else
        {
            st.push(x);
            st.push(x);
        }
        
    }
    
    void pop() {
        st.pop();
        st.pop();
        
    }
    
    int top() {
        int min=st.top();
        st.pop();
        int x= st.top();
        st.push(min);
        return x;
    }
    
    int getMin() {
        return st.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */