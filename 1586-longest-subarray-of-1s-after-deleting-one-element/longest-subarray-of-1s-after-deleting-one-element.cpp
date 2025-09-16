class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0,len=INT_MIN;
        int maxlen=INT_MIN;
        int k=1;
        int flip=0;
        while(j<n){
            if(nums[j]==1) j++;
            else{
                if(flip<k){
                    flip++;
                    j++;
                }
                else{
                    len=j-i;
                    maxlen=max(maxlen,len);
                    while(nums[i]==1) i++;
                    i++;
                    j++;
                }
            }
        }
        len=j-i;
        maxlen=max(maxlen,len);
        return maxlen-1;
    }
};