class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n=nums.size();
        int Osum=0,Esum=0;
        for(int i=0;i<n;i++){
            if(i%2==0) Esum+=nums[i];
            else Osum+=nums[i];
        }
        int ans=Esum-Osum;
    return ans;
    }
};