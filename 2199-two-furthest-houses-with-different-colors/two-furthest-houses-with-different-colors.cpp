class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n=colors.size();
        if(n==0) return 0;
        if(n==1 || (n==2 && colors[0]==colors[1])) return 0;
        
        int d=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(colors[i]!=colors[j]) d=max(d,j-i);
            }
        }
        return d;
    }
};