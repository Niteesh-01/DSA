class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> arr(n,vector<int> (n));
        int minr=0,maxr=n-1,minc=0,maxc=n-1;
        int count=1;
        while(minr<=maxr && minc<=maxc){
            //right
            for(int i=minc;i<=maxc;i++){
                arr[minc][i]=count;
                count++;
            }
            minr++;
            //down
            if(minr>maxr || minc>maxc) break;
            for(int i=minr;i<=maxr;i++){
                arr[i][maxc]=count;
                count++;
            }
            maxc--;
            if(minr>maxr || minc>maxc) break;
            //left
            for(int j=maxc;j>=minc;j--){
                arr[maxr][j]=count;
                count++;
            }
            maxr--;
            if(minr>maxr || minc>maxc) break;
            //top
            for(int i=maxr;i>=minr;i--){
                arr[i][minc]=count;
                count++;
            }
            minc++;
            if(minr>maxr || minc>maxc) break;
        }
        return arr;
    }
};