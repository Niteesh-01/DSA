class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot=-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]) {
                pivot=i;
                break;
            }
        }

        if(pivot==-1) reverse(nums.begin(),nums.end());
        else{
            for(int i=nums.size()-1;i>pivot;i--){
                if(nums[i]>nums[pivot]) {
                    swap(nums[pivot],nums[i]);
                    break;
                }
            }
            reverse(nums.begin()+pivot+1,nums.end());
        }

        
    }
};