class Solution {
public:
    set<vector<int>> s;

    void comboSum(vector<int> &a,int i,vector<int> &combi,vector<vector<int>> &ans,int target){
        if(i==a.size() || target<0) return;
        if(target==0){
            if(s.find(combi)==s.end()){ //to check if the combination already exist?
                ans.push_back({combi});
                s.insert(combi);
            }
            return;
        }
        //include single
        combi.push_back(a[i]);
        comboSum(a,i+1,combi,ans,target-a[i]);
        //multi inclusion
        comboSum(a,i,combi,ans,target-a[i]);
        //exclud
        combi.pop_back();
        comboSum(a,i+1,combi,ans,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combination;
        comboSum(candidates,0,combination,ans,target);
        return ans;
    }
};