class Solution {
public:
    int num(char s){
        if(s=='I') return 1;
        else if(s=='V') return 5;
        else if(s=='X') return 10;
        else if(s=='C') return 100;
        else if(s=='L') return 50;
        else if(s=='D') return 500;
        else return 1000;
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