class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.size();
        int count=0;
        unordered_set<char> set;

        for(int j=0;j<3;j++){
            set.insert(s[j]);
        }
        if(set.size()==3) count++;

        int i=1,j=3;
        while(j<n){
            set.clear();
            for(int k=i;k<=j;k++){
                set.insert(s[k]);
            }
            if(set.size()==3) count++;
            i++;
            j++;
        }
        return count;
    }
};