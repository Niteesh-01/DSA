class Solution {
public:
    bool check(int a){
        int b=a;
        while(a>0){
            int digit=a%10;
            if(digit==0) return false;
            if(b%digit!=0){
                return false;
            }
            a/=10;
        }
        return true;
    } 
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            if(i<10) ans.push_back(i);
            else if(check(i)) ans.push_back(i);
        }
        return ans;
    }
};