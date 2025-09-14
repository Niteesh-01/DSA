class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int k=minutes;
        vector<int>& arr=customers;
        int preLoss=0;
        for(int i=0;i<k;i++){
            if(grumpy[i]==1) preLoss+=arr[i];
        }
        //now sliding window
        int maxLoss=preLoss;
        int idx=0;
        int i=1;
        int j=k;
        int n=arr.size();
        while(j<n){
            int currLoss=preLoss;
            if(grumpy[j]==1) currLoss+=arr[j];
            if(grumpy[i-1]==1) currLoss-=arr[i-1];
            if(maxLoss<currLoss){
                maxLoss=currLoss;
                idx=i;
            }
            preLoss=currLoss;
            i++;
            j++;
        }
        //till now have find that index jaha se wo grumpy ko control krega to max customer will satisfied
        //now filling zero in the grumpy arr
        for(int i=idx;i<idx+k;i++){
            grumpy[i]=0;
        }
        //now calculating max satisfaction
        int sum=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0) sum +=arr[i];
        }
        return sum;
    }
};