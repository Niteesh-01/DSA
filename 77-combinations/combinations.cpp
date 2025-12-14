class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> &a,int i, int n, int k){
        if(a.size()==k){
            ans.push_back({a});
            return;
        }
        if(i>n){
            return;
        }
        a.push_back(i);
        solve(a,i+1,n,k);
        a.pop_back();
        solve(a,i+1,n,k);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        solve(temp,1,n,k);
        return ans;
    }
};