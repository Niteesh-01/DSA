class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //total posible characters=256 (0->255) so use a vector of size 256

        vector<int> v(256,-1);
        int l=0,r=0,mxlen=0;

        while(r<s.size()){
            if(v[s[r]]!=-1){  //means s[r] exist in this window
                if(v[s[r]]>=l) l=v[s[r]]+1; //here if condition check krega ki jo cha repeat kiya h uska indx l se bda h ya chota agr bda hua mtlb wo is window me h and we have to change our window and if chota hua to mtlb window se bahr h
            }
            mxlen=max(mxlen,r-l+1);
            v[s[r]]=r;
            r++;
        }
        return mxlen;
    }
};