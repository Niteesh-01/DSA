class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //brute force approach
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                if(sum==k) count++;
            }
        }
        return count;

        // int i=0,j=1,count=0;
        // int sum=nums[0];
        // while(i<=j && j<nums.size()){
        //     if(sum==k){
        //         count++;
        //         sum=sum-nums[i]+nums[j];
        //         i++;
        //         j++;
        //     }
        //     else if(sum<k){
        //         sum+=nums[j];
        //         j++;
        //     }
        //     else{
        //         sum-=nums[i];
        //         i++;
        //     }
        // }
        // return count;
    }
};