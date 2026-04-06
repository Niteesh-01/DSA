class Solution {
public:
    bool rotateString(string s, string goal) { 
         int n = s.size();
         int d =1;
         for(int i =0 ;i<n ;i++){
            rotate(s.begin(),s.begin()+d,s.end());
            if(s== goal) return true;
         }
         return false;
    
    }
};