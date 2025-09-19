class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long> ans(n);
        long long maxm=LLONG_MIN;
        long long preSum=0;
        for(int i=0;i<n;i++){
            //long long y=(long long)(nums[i]);
            maxm=max(maxm,(long long)nums[i]);
            ans[i]=nums[i]+maxm+preSum;
            preSum=ans[i];
        }
    return ans;
    }
};