class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m=mat.size() , n=mat[0].size();
        int row_s=0 , row_e=m-1 , col_s=0 , col_e=n-1;
        vector<int> ans;
        //int t=m*n;
        while(row_s<=row_e && col_s<=col_e){
            int count=0;
            //right
            for(int j=col_s;j<=col_e ;j++){
                ans.push_back(mat[row_s][j]);
                count++;
            }
            row_s++;

            //down
            for(int i=row_s;i<=row_e ;i++){
                ans.push_back(mat[i][col_e]);
                count++;
            }
            col_e--;

            //left
            if(row_s <= row_e) {
                for(int j=col_e;j>=col_s ;j--){
                    ans.push_back(mat[row_e][j]);
                    count++;
                }
                row_e--;
            }

            //up
            if(col_s <= col_e) {
                for(int i=row_e;i>=row_s;i--){
                    ans.push_back(mat[i][col_s]);
                    count++;
                }
                col_s++;
            }
        }
        return ans;
    }
};