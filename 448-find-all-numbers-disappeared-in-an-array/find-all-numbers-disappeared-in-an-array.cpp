class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int s=1;
        for(int i=0;i<nums.size();i++){
            if(mp.find(s)==mp.end()){
                ans.push_back(s);
                s++;
            }
            else s++;
        }
        return ans;
    }
};