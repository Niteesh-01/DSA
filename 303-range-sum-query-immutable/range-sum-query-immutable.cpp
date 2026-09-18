class NumArray {
    vector<int> a;
public:
    NumArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            a.push_back(nums[i]);
        }
    }
    
    int sumRange(int left, int right) {
        int ans;
        for(int i=left;i<=right;i++){
            ans+=a[i];
        }
        return ans;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */