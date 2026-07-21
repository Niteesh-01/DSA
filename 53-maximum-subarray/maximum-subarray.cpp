class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int best=nums[0],ans=nums[0];
        for(int i=1;i<n;i++){
            if(best+nums[i]>nums[i]) best=best+nums[i];
            else best=nums[i];
            ans=max(best,ans);
        }
        return ans;
    }
};