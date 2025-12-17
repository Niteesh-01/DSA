class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size(),-1);
        if(nums.size()==1) return ans;
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            if(i==nums.size()-1) j=0;
            while(j!=i){
                if(nums[j]>nums[i]){
                    ans[i]=nums[j];
                    break;
                }
                if(j<nums.size()) j++;
                if(j==nums.size()) j=0;
            }
        }
        return ans;
    }
};