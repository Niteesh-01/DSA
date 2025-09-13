class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n=satisfaction.size();
        //sort the given satisfaction arr
        sort(satisfaction.begin(),satisfaction.end());
        //now to find suffix sum
        int suf[n];
        suf[n-1]=satisfaction[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]+satisfaction[i];
        }

        //now for pivote indx
        int idx=-1;
        for(int i=0;i<n;i++){
            if(suf[i]>=0){
                idx=i;
                break;
            }
        }
        //now to find maxSum
        int maxSum=0;
        int x=1;
        if(idx==-1) return 0;
        for(int i=idx;i<n;i++){
            maxSum +=satisfaction[i]*x;
            x++;
        }
        return maxSum;
        
    }
};