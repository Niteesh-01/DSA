class Solution {
public:
    void parentheses(int n,int l,int r,vector<string>& ans,string& temp){
        if(l+r==2*n){
            ans.push_back(temp);
        }
        //left
        if(l<n){
            temp.push_back('(');
            parentheses(n,l+1,r,ans,temp);
            temp.pop_back();
        }
        //right
        if(r<l){
            temp.push_back(')');
            parentheses(n,l,r+1,ans,temp);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        parentheses(n,0,0,ans,temp); //size,l,r,ans,temp
        return ans;
    }
};