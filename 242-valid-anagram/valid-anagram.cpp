class Solution {
public:
    bool isAnagram(string s, string t) {
        //using map
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        for(int i=0;i<s.size();i++){
            //s ke sare char ko m1 me dal denge with its freq
            m1[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            m2[t[i]]++;
        }
        //both strings freq has been counted now comparision part
        for(auto x:m1){
            char ch1=x.first;  //key
            int freq1=x.second;  //value
            if(m2.find(ch1)!=m2.end()){
                int freq2=m2[ch1]; //it will give freq of ch1 in m2
                if(freq1!=freq2) return false; 
            }
            else return false;
        }
        return true; //means all freq matched

        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // bool flag=true;
        // if(s==t){
        //     return flag;
        // }
        // return !flag;
    }
};