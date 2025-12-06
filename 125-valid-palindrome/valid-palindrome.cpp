class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()==0 || s.size()==1) return true;
        string result;

        for(char c : s) {
            if(isalnum(c)) {     // keep only alphabets or numbers
                result += tolower(c);  // convert uppercase to lowercase
            }
        }
        int i=0,j=result.size()-1;
        while(i<=j){
            if(result[i]!=result[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};