class Solution {
public:
    string reversePrefix(string s, char ch) {
        stack<char> st;
        int i=0;
        while(i<s.size() && s[i]!=ch){
            st.push(s[i]);
            i++;
        }
        if(i==s.size()) return s;
        string ans="";
        ans+=s[i];
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        for(int j=i+1;j<s.size();j++){
            ans+=s[j];
        }
        return ans;
    }
};