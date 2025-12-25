class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> tt;
        for(int i=0;i<s.size();i++){
            if(s[i]!='#') st.push(s[i]);
            else if(!st.empty()) st.pop();
        }

        for(int i=0;i<t.size();i++){
            if(t[i]!='#') tt.push(t[i]);
            else if(!tt.empty()) tt.pop();
        }
        while(st.size()>0 && tt.size()>0){
            if(st.top()==tt.top()){
                st.pop();
                tt.pop();
            }
            else return false;
        }
        return (st.empty() && tt.empty());
    }
};