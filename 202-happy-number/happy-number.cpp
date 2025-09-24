class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> m;
        while(n!=1){
            int sqrSum=0;
            int temp=n;
            while(temp>0){
                int x=temp%10;
                sqrSum+=(x*x);
                temp/=10;
            }
            if(m.find(sqrSum)!=m.end()){
                return false;
            }
            m.insert(sqrSum);
            n=sqrSum;
        }
        return true;
    }
};