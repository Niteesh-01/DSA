class Solution {
public:
    bool isSafe(vector<string> &board,int row,int col,int n){
        //row wise
        for(int j=0;j<n;j++){
            if(board[row][j]=='Q') return false;
        }
        //col wise
        for(int i=0;i<n;i++){
            if(board[i][col]=='Q') return false;
        }
        //left dia wise
        for(int i=row,j=col;i>=0 && j>=0; i--,j--){
            if(board[i][j]=='Q') return false;
        }
        //right dia wise
        for(int i=row,j=col;i>=0 && j<n;i--,j++){
            if(board[i][j]=='Q') return false;
        }
        return true;
    }
    void Nqueens(vector<string> &board,int row,int n,vector<vector<string>> &ans){
        if(row==n){
            ans.push_back(board);
            return;
        }
        for(int j=0;j<n;j++){
            if(isSafe(board,row,j,n)){
                board[row][j]='Q';
                Nqueens(board,row+1,n,ans);
                board[row][j]='.';  //backtrack
            }
        }
    }
    int totalNQueens(int n) {
        vector<string> board(n,string(n , '.'));
        vector<vector<string>> ans;
        Nqueens(board,0,n,ans);
        return ans.size();
    }
};