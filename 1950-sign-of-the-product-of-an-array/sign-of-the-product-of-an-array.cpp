class Solution {
public:
    int signF(long long x){
        if(x>0) return 1;
        if(x<0) return -1;
        return 0;
    }
    int arraySign(vector<int>& nums) {
        long long p=1;
        for(int i=0;i<nums.size();i++){
            p*=nums[i];
            if(p>0) p=1;
            if(p<0) p=-1;
        }
        return signF(p);
    }
};