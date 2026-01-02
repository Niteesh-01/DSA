class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        // unordered_map<int,int> mp;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     mp[nums[i]]++;
        // }
        // for(auto x:mp){
        //     if(x.second==n/2) return x.first;
        // }
        // return -1;

        // sort(nums.begin(),nums.end());
        // int n=nums.size();
        // if(nums[n/2 -2]==nums[n/2 -1]) return nums[n/2 -1];
        // else if(nums[n/2 + 1]==nums[n/2]) return nums[n/2+1];
        // return nums[nums.size()/2];

        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]==nums[i+1] || nums[i]==nums[i+2]){
                return nums[i];
            }
        }
        return nums[nums.size()-1];
        
        //Boyer–Moore Majority Vote Algorithm
        // int candidate=nums[0] , vote=1;
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]==candidate) vote++;
        //     else vote--;
        //     if(vote==0){
        //         candidate=nums[i];
        //         vote=1;
        //     }
        // }
        // vote=0;
        // for(int x : nums) {
        //     if(x==candidate)
        //         vote++;
        // }

        // if(vote>=nums.size() / 2)
        //     return candidate;
        // return -1;   //Boyer–Moore Majority Vote Algorithm when a ele occurs more than n/2 times not exactly n/2 times 
    }
};