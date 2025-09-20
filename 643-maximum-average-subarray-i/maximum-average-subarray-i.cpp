class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       int n=nums.size();
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double maxAvg=sum/k;
       for(int j=k;j<n;j++){
        sum+=nums[j]-nums[j-k];
        maxAvg=max(maxAvg,sum/k);
       }
        return maxAvg; 
    }
};