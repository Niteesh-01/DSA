class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        int maxf=0;
        for(auto x:m){
            if(x.second>maxf) maxf=x.second;
        }
        int ans=0;
        for(auto x:m){
            if(x.second==maxf) ans+=x.second;
        }
        return ans;
    }
};