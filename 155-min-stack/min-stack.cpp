class MinStack {
public:
    long long mn;
    stack<long long> st;
    MinStack() {
        mn=LLONG_MAX;
    }
    
    void push(int val) {
        long long x=(long long)val;
        if(st.empty()){
            st.push(x);
            mn=x;
        }
        else if(x>=mn) st.push(x);
        else{  //if(val<st.top())
            st.push(2*x-mn);
            mn=x;
        }
    }
    
    void pop() {
        if(st.top()<mn){ //fake value
            long long oldmn=2*mn-st.top();
            mn=oldmn;
        }
        st.pop();
    }
    
    int top() {
        if(st.top()<mn){
            return mn;
        }
        else return (int)st.top();
    }
    
    int getMin() {
       return (int)mn; 
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