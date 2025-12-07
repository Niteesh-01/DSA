class Solution {
public:
    int countOdds(int low, int high) {
        int count=0;
        if(low%2==0) low+=1;
        for(int i=low;i<=high;i=i+2){
            count++;
        }
        return count;
    }
};