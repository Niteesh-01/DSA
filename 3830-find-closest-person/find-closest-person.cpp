class Solution {
public:
    int findClosest(int x, int y, int z) {
        int dif1=abs(z-x);
        int dif2=abs(z-y);
        if(dif1<dif2) return 1;
        else if(dif1>dif2) return 2;
        else return 0;
    }
};