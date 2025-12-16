class Solution {
public:

    bool isSafe(vector<vector<char>>& board,int row,int col,char digit){
        //horizontal
        for(int j=0;j<9;j++){
            if(board[row][j]==digit) return false;
        }
        //vertical
        for(int i=0;i<9;i++){
            if(board[i][col]==digit) return false;
        }
        //in the particular grid
        int sr=(row/3)*3, sc=(col/3)*3;
        for(int i=sr;i<sr+3;i++){
            for(int j=sc;j<sc+3;j++){
                if(board[i][j]==digit) return false;
            }
        }
        return true;
    }
    bool helper(vector<vector<char>>& board,int row,int col){
        if(row==9){
            return true;
        }

        int nextR=row;
        int nextC=col+1;
        if(nextC==9) {
            nextR=row+1;
            nextC=0;
        }

        if(board[row][col]!='.'){
            return helper(board,nextR,nextC);
        }

        // if cell is empty then chech possible number place the digit
        for(char digit='1';digit<='9';digit++){
            if(isSafe(board,row,col,digit)){
                board[row][col]=digit;
                if(helper(board,nextR,nextC)) return true;

                board[row][col]='.';  //backtrack;
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        helper(board,0,0);
    }
};