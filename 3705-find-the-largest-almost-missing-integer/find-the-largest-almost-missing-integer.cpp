class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        
        if(k==n) return *max_element(nums.begin(),nums.end());

        if(k==1){
            int max=-1;
            for(int i=0;i<n;i++){
                if(m[nums[i]]==1 && nums[i]>max) max=nums[i];
            }
            return max;
        }

        if(m[nums[0]]==1 && m[nums[n-1]]==1) return max(nums[0],nums[n-1]);
        if(m[nums[0]]==1) return nums[0];
        if(m[nums[n-1]]==1) return nums[n-1];

        return -1;
    }
};