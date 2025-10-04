class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            if(x.second==n/2) return x.first;
        }
        return -1;

        // sort(nums.begin(),nums.end());
        // int n=nums.size();
        // if(nums[n/2 -2]==nums[n/2 -1]) return nums[n/2 -1];
        // else if(nums[n/2 + 1]==nums[n/2]) return nums[n/2+1];
        // return nums[nums.size()/2];
    }
};