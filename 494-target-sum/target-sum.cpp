class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        return helper(nums,0,0,target);
    }

    int helper(vector<int>& nums,int idx,int currSum,int target){
        if(idx==nums.size()){
            return currSum==target ? 1:0;
        }
        int add=helper(nums,idx+1,currSum+nums[idx],target);
        int sub=helper(nums,idx+1,currSum-nums[idx],target);
        return add+sub;
    }
};