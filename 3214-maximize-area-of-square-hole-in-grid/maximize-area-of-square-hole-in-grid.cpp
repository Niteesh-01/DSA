class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        sort(begin(hBars),end(hBars));   
        sort(begin(vBars),end(vBars));

        int maxConHbars=1;   
        int maxConVbars=1;

        int currConHbars=1;
        for(int i=1;i<hBars.size();i++){
            if(hBars[i]-hBars[i-1]==1){
                currConHbars++;
            }
            else currConHbars=1;
            maxConHbars=max(currConHbars , maxConHbars);
        } 

        int currConVbars=1;
        for(int i=1;i<vBars.size();i++){
            if(vBars[i]-vBars[i-1]==1){
                currConVbars++;
            }
            else currConVbars=1;
            maxConVbars=max(currConVbars , maxConVbars);
        }

        int side=min(maxConHbars , maxConVbars) + 1;
        return side*side;
    }
};