class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        // vector<int> ans;
        // unordered_set<int> s(nums.begin(),nums.end());
        // int minm=*min_element(nums.begin(),nums.end());
        // int maxm=*max_element(nums.begin(),nums.end());
        // for(int i=minm;i<=maxm;i++){
        //    if(s.find(i)==s.end()){
        //        ans.push_back(i);
        //    }
        // }
        // return ans;

        vector<int> ans;
        unordered_set<int> s(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        int minm=nums[0], maxm=nums[nums.size()-1];

        for(int i=minm;i<maxm;i++){
            if(s.find(i)==s.end()){
                ans.push_back(i);
            }
        }
        return ans;

    }
};