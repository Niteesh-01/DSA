class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int len=1;
        long long num=1;
        unordered_set<int> s;
        while(num%k!=0){
            if(s.find(num%k)!=s.end()){
                return -1;
            }
            else s.insert(num%k);
            num=(num%k)*10 + 1;
            len++;
        }
        return len;
    }
};