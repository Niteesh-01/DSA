class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> v(26,0);

        for(int i=0;i<t.size();i++){
            v[t[i]-'a']++;
        }

        for(int i=0;i<s.size();i++){
            v[s[i]-'a']--;
        }
        int a=-1;
        for(int i=0;i<26;i++){
            if(v[i]!=0){
                a=i;
                break;
            }
        }
        char c;
        if(a!=-1) c=char(int('a')+a);
        return c;
    }

    //another optimised aproach can be take two sum variables and store the ascii sum of both strings and then return the difference of these sum
};