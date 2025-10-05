class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int Esum=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0) Esum+=nums[i];
            else Esum-=nums[i];
        }
    return Esum;
    }
};