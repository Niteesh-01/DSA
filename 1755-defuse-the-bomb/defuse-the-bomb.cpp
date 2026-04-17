class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int> ans(n,0);
        if(k==0) return ans;
        if(k>0){
            int rsum=0;
            for(int i=0;i<k;i++){
                rsum+=code[i];
            }

            for(int i=0;i<n;i++){
                rsum=rsum-code[i]+code[k];
                ans[i]=rsum;
                k++;
                if(k>=n) k=0;
            }
        }
        else{
            int rsum=0;
            int j=n+k,l=0;
            for(int i=n-1;i>=j;i--) rsum+=code[i];
            for(int i=0;i<n;i++){
                ans[i]=rsum;
                rsum=rsum-code[j++]+code[l++];
                if(j==n) j=0;
            }
        }
        
        return ans;

    }
};