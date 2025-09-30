class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        unordered_map<char,int> mp;
        int l=0,maxlen=0;
        for(int r = 0; r < n; r++) {
        char c = s[r];
        if(mp.count(c) && mp[c] >= l) {
            l = mp[c] + 1;  
        }
        mp[c] = r;  
        maxlen = max(maxlen, r - l + 1);
    }
    return maxlen;
    }
};