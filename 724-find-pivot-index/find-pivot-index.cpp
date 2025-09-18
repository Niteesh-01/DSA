class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        // vector<int> pre(n);
        // vector<int> suf(n);
        // pre[0]=0;
        // for(int i=1;i<n;i++){
        //     pre[i]=pre[i-1]+nums[i-1];
        // }
        // suf[n-1]=0;
        // for(int i=n-2;i>=0;i--){
        //     suf[i]=suf[i+1]+nums[i+1];
        // }
        // for(int i=0;i<n;i++){
        //     if(pre[i]==suf[i]) return i;
        // }
        // return -1;

        //it can be more optimised as in above solution we are using two new vector which increases space and to much loops that increases time complexity

        //instead of doing this we can calculate left and right sum for each idx and if equal then return that idx i.e
        //here we need only suf sum in advance

        int rightSum=0;
        for(int i=n-1;i>0;i--){
            rightSum+=nums[i];
        }
        int leftSum=0;
        if(leftSum==rightSum) return 0;
        int i=1; //not including 0
        while(i<n){
            leftSum+=nums[i-1];
            rightSum-=nums[i];
            if(leftSum==rightSum){
                return i;
            }
            i++;
        }
        return -1;
    }
};