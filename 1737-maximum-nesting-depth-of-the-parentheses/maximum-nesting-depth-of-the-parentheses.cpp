class Solution {
public:
    int maxDepth(string s) {
        int maxdep=0,current=0;
        for(char ch:s){
            if(ch=='('){
                current++;
                maxdep=max(maxdep,current);
            } 
            else if (ch==')'){
                current--;
            }
        }
        return maxdep;
    }
};