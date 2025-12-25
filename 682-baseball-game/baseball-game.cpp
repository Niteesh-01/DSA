class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int> st;
        for(int i=0;i<op.size();i++){
            if(op[i]=="C") st.pop();
            else if(op[i]=="D"){
                st.push(st.top()*2);
            }
            else if(op[i]=="+"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.push(a);
                st.push(a+b);
            }
            else{
                st.push(stoi(op[i]));
            }
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};