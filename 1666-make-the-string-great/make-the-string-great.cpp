class Solution {
public:
    string makeGood(string s) {
        //A-Z -> 65 to 90 , 'a' to 'z' -> 97 to 122 i.e the difference between the lowercase and uppercase of the same char=32
        stack<char> st;
        string ans="";
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(st.size()>0 && abs(st.top()-s[i])==32) st.pop();
            else st.push(s[i]);
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};