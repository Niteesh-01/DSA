class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }
            else{
                if(st.size()==0) return false;

                if((st.top()=='(' && s[i]==')') || (st.top()=='[' && s[i]==']') || (st.top()=='{' && s[i]=='}')){
                    st.pop();
                }
                else return false;  //means no match
            }
            
        }
        return st.empty();


        // //below approach is wrong for -> "([)]"   type of inputs
        // unordered_map<char,int> mp;
        // for(int i=0;i<s.size();i++){
        //     mp[s[i]]++;
        // }
        // if(mp['(']==mp[')'] && mp['[']==mp[']'] && mp['{']==mp['}']) return true;
        // return false;
    }
};