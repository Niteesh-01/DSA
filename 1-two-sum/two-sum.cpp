class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            int t=target-nums[i];
            if(m.find(t)!=m.end()){
                ans.push_back(m[t]);
                ans.push_back(i);
            }
            else m[nums[i]]=i;
        }
        return ans;
    }
   
};
