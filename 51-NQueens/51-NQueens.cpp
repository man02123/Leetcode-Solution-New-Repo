// Last updated: 08/12/2025, 17:40:25
class Solution {
private : vector<vector<string>> solutionSet;
public:
    vector<vector<string>> solveNQueens(int n) {
    
    vector<string> solution(n ,string(n,'.'));
    
    recur(n , solution , 0);
    return solutionSet;
        
    }

    void recur(int numberofQueens , vector<string> &temp , int col){
        
        if(numberofQueens == 0 && temp.size() >= col) {
            
            solutionSet.push_back(temp);
            return;
        }
        if(temp.size() <= col){
            return;
        }

        for(int row = 0 ; row<temp.size();row++){

            if(check(temp , row , col)){
                temp[row][col] = 'Q';
                recur(numberofQueens-1 , temp , col+1);
                temp[row][col] = '.';
            }
        }

    }

    bool check(vector<string> &board , int row , int col){

       // if(row<0 || col >= temp[0].size() || row>=temp.size() || col < 0)return false;

        // int rl_lim = 0;
        // int ru_lim = temp.size()-1;
        // int cl_lim = temp[0].size() ;
        // int cu_lim = 0;

        // bool ans = false;
        // int x = row+1;
        
        // while(x < cu_lim){
        //     if(temp[x][col] == 'Q')return false;
        //     x++;
        // } // check down

        //  x = row-1;
        // while(x>=0) {
        //     if(temp[x][col] == 'Q')return false;
        //     x--;
        // } // check up

        // int y = col-1;
        // while(y>=0) {
        //    if(temp[row][y] == 'Q')return false; 
        //    y--;
        // }// left

        // y = col+1;
        // while(y<cu_lim) {
        //    if(temp[row][y] == 'Q')return false; 
        //    y++;
        // }//right

        // int drow = row , dcol = col;

        // while(drow <0)

        // return true;

        int duprow = row;
      int dupcol = col;
        int n = board.size();

      while (row >= 0 && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row--;
        col--;
      }

      col = dupcol;
      row = duprow;
      while (col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        col--;
      }

      row = duprow;
      col = dupcol;
      while (row < n && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row++;
        col--;
      }
      return true;

    }
};