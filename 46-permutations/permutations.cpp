class Solution {
public:
    void permutation(vector<int>& a,int i,vector<vector<int>>& ans){
        if(i==a.size()){
            ans.push_back(a);
            return;
        }
        for(int idx=i;idx<a.size();idx++){
            swap(a[idx],a[i]);
            permutation(a,i+1,ans);

            //backtrack
            swap(a[idx],a[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permutation(nums,0,ans);
        return ans;
    }
};