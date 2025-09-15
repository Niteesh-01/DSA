class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0; //two pointer starts from indx 0
        int minlen=INT_MAX;
        int len;
        int sum=0;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                len=j-i+1;
                minlen=min(minlen,len);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        if(minlen==INT_MAX) return 0;
        else return minlen;
    }
};