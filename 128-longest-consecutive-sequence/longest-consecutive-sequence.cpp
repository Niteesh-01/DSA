class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=1;
        int maxcount=1;
        if(n==0) return 0;
        if(n==1) return 1;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]-1) count++;
            else if(nums[i]==nums[i+1]) continue;
            else count=1;
            if(maxcount<count) maxcount=count;
        }
        return maxcount;
    }
};