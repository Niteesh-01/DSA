class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count=0,n=nums.size();
        int preSum=0,sufSum=nums[n-1];
        for(int i=0;i<n-1;i++){
            preSum+=nums[i];
        }
        int i=n-2;
        while(i>=0){
            if((preSum-sufSum)%2==0){
                count++;
            }
            preSum-=nums[i];
            sufSum+=nums[i];
            i--;
        }
        return count;
    }
};