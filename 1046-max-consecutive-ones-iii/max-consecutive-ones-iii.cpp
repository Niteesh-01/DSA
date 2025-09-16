class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        int maxlen=INT_MIN;
        int len=0;
        int flip=0;
        while(j<n){
            if(nums[j]==1) j++;
            else{
                if(flip<k){
                    flip++;
                    j++;
                }
                else{ //flip==k to i ko uske aage wale 0 se 1 idx aage le jao
                    len=j-i;
                    maxlen=max(maxlen,len);
                    while(nums[i]==1) i++; //i ko pahle zero pe le gaye
                    i++; 
                    j++;
                }
            }
            len=j-i;
            maxlen=max(maxlen,len);
        }
        return maxlen;
    }
};