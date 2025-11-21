class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0) return -1;
        int n=haystack.size(), m=needle.size();
        for(int i=0;i+m<=n;i++){
            int k=0;
            while(k<m && haystack[i+k]==needle[k]){
                k++;
            }
            if(k==m) return i;
        }
        return -1;
    }
};