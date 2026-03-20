class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()<=1) return;
        vector<int> v;
        bool flag=true;
        for(auto x:nums){
            if(x!=0){
                v.push_back(x);
                flag=false;
            }
        }
        if(flag) return;
        while(v.size()<=nums.size()){
            v.push_back(0);
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=v[i];
        }
    }
};