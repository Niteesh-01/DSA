class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int best=nums[0],ans=nums[0],mini=nums[0];
        for(int i=1;i<n;i++){
            int v1=best*nums[i];
            int v2=nums[i];
            int v3=mini*nums[i];
            best=max(v1,max(v2,v3));
            mini=min(v1,min(v2,v3));
            ans=max(ans,best);
        }
        return ans;
    }
};