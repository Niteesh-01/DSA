class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int min_idx=0, max_idx=0;
        int n=nums.size();

        if(n==1) return 1;

        for(int i=1;i<n;i++){
            if(nums[i]>nums[max_idx]) max_idx=i;
            if(nums[i]<nums[min_idx]) min_idx=i;
        }

        int left=min(min_idx,max_idx);
        int right=max(min_idx,max_idx);

        return min(right+1 , min(n-left , left+1+n-right));
    }
};