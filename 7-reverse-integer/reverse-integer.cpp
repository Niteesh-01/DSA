class Solution {
public:
    int reverse(int x) {
        bool isNeg= x<0;
        long long y=x;
        string s=to_string(abs(y));
        std::reverse(s.begin(),s.end());
        long long rev=stoll(s);  //string to long long
        if(isNeg) rev=-rev;
        if(rev>INT_MAX || rev<INT_MIN) return 0;
        return rev;  
    }
};