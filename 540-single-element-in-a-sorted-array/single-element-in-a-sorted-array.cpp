class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int lo=0,hi=n-1;
        if(n==1) return nums[0];
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(mid==0) return nums[mid]; //ex [1,2,2,3,3] 
            if(mid>=0 && mid<=n-1){
                if(nums[mid]==nums[mid-1]){
                    if((mid-1)%2==0) lo=mid+1;
                    else hi=mid-1;
                }
                else if(nums[mid]==nums[mid+1]){
                    if(mid%2==0) lo=mid+1;
                    else hi=mid-1;
                }
                else return nums[mid];
            }
        }
        return -1;
        
    }
};