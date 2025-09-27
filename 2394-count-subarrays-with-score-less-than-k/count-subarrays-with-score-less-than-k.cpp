class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long n=nums.size();
        long long count=0;
        long long sum=0;
        //to pointer approach
        long long i=0,j=0;
        while(i<n && j<n){
            sum+=nums[j];
            long long score=sum*(j-i+1);
            while(i<=j && score>=k){
                sum-=nums[i++];
                score=sum*(j-i+1);
            }
            count+=(j-i+1);
            j++;
        }
        return count;
    }
};