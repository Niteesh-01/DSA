class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==1) return false;
        int sum=1;
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                sum+=i;
                if(i!=num/i) sum+=num/i;
            }
        }
        return sum==num; //true or false
        
        // int ans=0;
        // for(int i=1;i<=num/2;i++){
        //     if(num%i==0) ans+=i;
        // }
        // if(ans==num) return true;
        // else return false;
    }
};