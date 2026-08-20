class Solution {
public:
    bool divideArray(vector<int>& nums) {

        vector<int> count(500,0);
        for(auto v:nums){
            count[v-1]++;
        }

        for(int i=0;i<500;i++){
            if(count[i]%2 != 0) return false;
        }
        return true;

        //using map 
        // unordered_map<int,int> m;
        // for(int i=0;i<nums.size();i++){
        //     m[nums[i]]++;
        // }
        // for(auto v:m){
        //     if(v.second%2 !=0) return false;
        // }
        // return true;
    }
};