class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int k=n/3 + 1;
        for(auto &pair:mp){
            if(pair.second>=k) ans.push_back(pair.first);
        }
        return ans;
    }
};