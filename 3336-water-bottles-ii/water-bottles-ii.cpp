class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans=numBottles;
        int emptyB=numBottles;
        while(emptyB>=numExchange){
            emptyB-=numExchange++;
            ans++;
            emptyB++;
        }
        return ans;
    }
};