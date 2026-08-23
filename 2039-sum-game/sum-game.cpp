class Solution {
public:
    bool sumGame(string num) {
        int n=num.size();

        int lsum=0,rsum=0;

        int lcount=0,rcount=0;

        for(int i=0;i<n;i++){
            if(num[i]=='?'){
                if(i<n/2){
                    lcount++;
                }else{
                    rcount++;
                }
            }else {
                if(i<n/2) lsum+=num[i] - '0';
                else rsum+=num[i] - '0';
            }
        }

        int totalcount=lcount+rcount;
        if(totalcount%2 == 1) return true;

        int left=2 * lsum + 9* lcount;

        int right=2* rsum + 9*rcount;

        if(left==right) return false;

        return true;

    }
};