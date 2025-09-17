class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        if(k<=1) return 0;
        int i=0,j=0,count=0,product=1;
        while(j<n){
            product*=nums[j];
            while(product>=k){
                count+=(j-i);
                product/=nums[i]; 
                i++;
            }
            j++;
        }
        while(i<n){
                count+=(j-i);
                product/=nums[i]; 
                i++;
        }
        return count;
    }
};