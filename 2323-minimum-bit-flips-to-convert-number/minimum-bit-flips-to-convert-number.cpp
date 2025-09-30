class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x=start ^ goal;  // XOR -> differing bits
        int count = 0;
        // count set bits in x
        while(x > 0) {
            count += (x & 1); // check last bit
            x >>= 1;          // shift right
        }
        return count;
    }
};