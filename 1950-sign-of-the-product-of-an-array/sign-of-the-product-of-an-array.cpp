class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg=0,zero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0) neg++;
            if(nums[i]==0) zero++;
        }

        if(zero>0) return 0;
        if(neg%2==0) return 1;
        return -1;
    }
};