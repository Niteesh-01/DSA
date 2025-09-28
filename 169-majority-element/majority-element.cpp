class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return nums[n/2];
        // unordered_map<int,int> m;
        // for(int i=0;i<n;i++){
        //     m[nums[i]]++;
        // }
        // int maj=n/2;
        // for(auto x:m){
        //     if(x.second>maj) return x.first;
        // }
        //return -1;
    }
};