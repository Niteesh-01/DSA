class MinStack {
public:
    //method 1 T.C O(1) S.C O(n)
    // stack<int> st;
    // stack<int> helper;

    // MinStack() {
        
    // }
    
    // void push(int val) {
    //     st.push(val);
    //     if(helper.empty() || val<helper.top()){
    //         helper.push(val);
    //     }
    //     else{
    //         helper.push(helper.top());
    //     }
    // }
    
    // void pop() {
    //     st.pop();
    //     helper.pop();
    // }
    
    // int top() {
    //     return st.top();
    // }
    
    // int getMin() {
    //     return helper.top();
    // }


    //method 2 using vector
    vector<int> v;
    MinStack() {
        
    }
    
    void push(int val) {
       v.push_back(val);
    }
    
    void pop() {
        v.pop_back();
    }
    
    int top() {
        return v[v.size()-1];
    }
    
    int getMin() {
        int mn=v[0];
        for(int i=1;i<v.size();i++){
            mn=min(mn,v[i]);
        }
        return mn;
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