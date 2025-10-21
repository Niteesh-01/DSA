class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]!=i) return i;
        }
        // int lo=0,hi=n-1;
        // while(lo<=hi){
        //     int mid=lo+(hi-lo)/2;
        //     if(nums[mid]!=mid) return mid;
        //     if(nums[mid]<mid) hi=mid-1;
        //     if(nums[mid]==mid) lo=mid+1;
        //     //else return ;
        // }
        return n;
    }
};