class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(nums[n/2 -2]==nums[n/2 -1]) return nums[n/2 -1];
        else if(nums[n/2 + 1]==nums[n/2]) return nums[n/2+1];
        return nums[nums.size()/2];
    }
};