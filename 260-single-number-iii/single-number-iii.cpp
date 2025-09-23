class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(2);
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            if(s.find(nums[i])!=s.end()) s.erase(nums[i]);
            else s.insert(nums[i]);
        }
        int i=0;
        for(int ele:s){
            ans[i++]=ele;
        }
        return ans;
    }
};