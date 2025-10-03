class Solution {
public:
    int numWaterBottles(int B, int E) {
        int ans=B;
        int emptyB=B;
        while(emptyB>=E){
            if(emptyB%E==0){
                ans+=emptyB/E;
                emptyB/=E;
            }
            else{
                ans+=emptyB/E;
                emptyB=emptyB/E + emptyB%E;
            }
        }
        return ans;
    }
};