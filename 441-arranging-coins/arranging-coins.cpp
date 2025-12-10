class Solution {
public:
    int arrangeCoins(int n) {
        int count=0;
        for(int i=0;i<=n/2;i++){
            if((n-i) > i) count++;
            n-=i;
        }
        return count;
    }
};