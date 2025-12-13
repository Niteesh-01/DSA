class Solution {
public:

    void allSubset(vector<int> &nums,vector<int> &ans,int i,vector<vector<int>> &finalans){
        if(i==nums.size()){
            finalans.push_back({ans});
            return;
        }
        ans.push_back(nums[i]);
        allSubset(nums,ans,i+1,finalans);
        ans.pop_back();
        int idx=i+1;
        while(idx<nums.size() && nums[i]==nums[idx]) idx++;
        allSubset(nums,ans,idx,finalans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> final;
        sort(nums.begin(),nums.end());
        allSubset(nums,ans,0,final);
        return final;
    }
};