class Solution {
public:
    int num(char s){
        int a=0;
        if(s=='I') a=1;
        else if(s=='V') a=5;
        else if(s=='X') a=10;
        else if(s=='C') a=100;
        else if(s=='L') a=50;
        else if(s=='D') a=500;
        else a=1000;
        return a;
    }
    int romanToInt(string s) {
        int ans=0 , idx=0;
        while(idx<s.size()-1){
            if(num(s[idx])<num(s[idx+1])) ans-=num(s[idx]);
            else ans+=num(s[idx]);
            idx++;
        }
        ans+=num(s[s.size()-1]);
        return ans;
    }
};