class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int n=nums.size();
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<n;i++){
        //     if(nums[i]!=i) return i;
        // }
        // return n;

        int c_sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            c_sum+=nums[i];
        }
        int s= n*(n+1)/2;
        return s-c_sum;
    }
};