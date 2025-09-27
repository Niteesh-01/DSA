class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int count=0;
        int currSum=0;
        for(int i=0;i<k;i++){
            currSum+=arr[i];
        }
        int avg=currSum/k;
        if(avg>=threshold) count++;
        int i=0,j=k;
        while(j<n){
            currSum=currSum-arr[i]+arr[j];
            avg=currSum/k;
            if(avg>=threshold) count++;
            i++;
            j++;
        }
        return count;
    }
};