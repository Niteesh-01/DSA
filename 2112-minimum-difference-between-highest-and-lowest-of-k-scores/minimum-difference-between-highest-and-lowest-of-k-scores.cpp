class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==1) return 0;
        sort(nums.begin(),nums.end());
        int d=INT_MAX;
        for(int l=0, r=k-1; r<n; r++, l++){
            d=min(d, nums[r]-nums[l]);
        }
        return d;
    }
};