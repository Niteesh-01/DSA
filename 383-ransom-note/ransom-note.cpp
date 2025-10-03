class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        int n=ransomNote.length();
        int m=magazine.length();
        if(m<n) return false;
        for(int i=0;i<magazine.length();i++){
            mp[magazine[i]]++;
        }
        for(int j=0;j<ransomNote.length();j++){
            if(mp.find(ransomNote[j])!=mp.end()){
                mp[ransomNote[j]]--;
                if(mp[ransomNote[j]]==0) mp.erase(ransomNote[j]);
            }
            else return false;
        }
        return true;
    }
};