class Solution {
public:
    string removeDuplicates(string s) {
        //using stack concept
        // stack<char> st;
        // for(int i=0;i<s.size();i++){
        //     if(st.empty() || st.top()!=s[i]){
        //         st.push(s[i]);
        //     }
        //     else st.pop();
        // }

        // stack<char> temp;
        // while(!st.empty()){
        //     temp.push(st.top());
        //     st.pop();
        // }
        // string ans="";
        // while(!temp.empty()){
        //     ans+=temp.top();
        //     temp.pop();
        // }
        // return ans; 

        //using string concept
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            if(!ans.empty() && ans.back() == s[i]){
                ans.pop_back();  
            } 
            else{
                ans.push_back(s[i]); 
            }
        }
        return ans;
    }
};