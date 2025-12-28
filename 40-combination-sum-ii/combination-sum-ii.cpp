class Solution {
public:
    void allcombo(vector<int> &a,int i,vector<int> &combi,vector<vector<int>> &ans,int target){
        if(target==0){
            ans.push_back(combi);
            return;
        }
        for(int j=i;j<a.size();j++){
            if(j>i && a[j]==a[j-1]) continue;
            if(a[j]>target) break;

            combi.push_back(a[j]);
            allcombo(a,j+1,combi,ans,target-a[j]);
            combi.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> combination;
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        allcombo(candidates,0,combination,ans,target);
        return ans;
    }
};