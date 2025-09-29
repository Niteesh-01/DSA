class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(n!=m) return false;
        unordered_map<char,char> m1;
        unordered_map<char,char> m2;
        for(int i=0;i<n;i++){
            char c1=s[i] ,c2=t[i];
            if(m1.count(c1) && m1[c1] != c2) return false;
            if(m2.count(c2) && m2[c2] != c1) return false;
            
            // create mapping
            m1[c1] = c2;
            m2[c2] = c1;
        }
        return true;
        // unordered_map<char,int> m1;
        // //count freq of each char of s 
        // for(int i=0;i<n;i++){
        //     m1[s[i]]++;
        // }
        // //now check for each char of t if freq matches remove it from s and if at the end m is empty then return true
        // unordered_map<char,int> m2;
        // for(int i=0;i<m;i++){
        //     m2[t[i]]++;
        // }

        // vector<int> countS, countT;
        // for(auto p : m1) countS.push_back(p.second);
        // for(auto p : m2) countT.push_back(p.second);

        // sort(countS.begin(), countS.end());
        // sort(countT.begin(), countT.end());

        // return countS == countT;
        //this will show error for s="bbbaaaba" and t="aaabbbba"
    }
};