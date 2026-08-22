class Solution {
public:
    bool checkDivisibility(int n) {
        int x=n,sum=0,product=1;
        while(n>0){
            sum+=n%10;
            product*=n%10;
            n/=10;
        }
        int a=sum+product;

        return x%a==0;
    }
};