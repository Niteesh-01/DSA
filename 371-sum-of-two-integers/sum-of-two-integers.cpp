class Solution {
public:
    int getSum(int a, int b) {
        while(b!=0){
            int carry=(a&b) << 1;  //same 1 diff 0
            a=a^b;   //diff 1 same 0
            b=carry;
        }
        return a;
    }
};