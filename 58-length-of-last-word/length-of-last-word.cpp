class Solution {
public:
    int lengthOfLastWord(string s) {
        int a=s.size()-1;
        while(s[a]==' ') a--;
        int count=0;
        while(a>=0 && s[a]!=' ') {
            count++;
            a--;
        }

        return count;
    }
};