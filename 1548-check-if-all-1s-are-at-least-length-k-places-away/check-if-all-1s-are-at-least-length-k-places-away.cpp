class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int i=0,j=1,len=0;
        while(i<nums.size() && nums[i]!=1) i++;
        j=i+1;
        while(j<nums.size()){
            if(nums[j]!=1) {
                len++;
                j++;
            }
            else if(nums[j]==1 && len>=k){
                i=j;
                len=0;
                j++;
            }
            else return false;
        }
        return true;
    }
};