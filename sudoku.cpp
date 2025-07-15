#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> &board){
      for(vector<int> x : board){
            for(int x1 : x){
                  cout << x1 << " ";
            }
            cout << endl;
      }
      cout << endl;
}

bool isValid(vector<vector<int>> &board, int i, int j, int num){
      int n = board.size();
      for(int x=0;x<n;x++) if(board[x][j] == num || board[i][x] == num) return false;
      int rn = sqrt(n);
      int si = i - i % rn;
      int sj = j - j % rn;
      for (int x = si; x < si + rn; x++) {
            for (int y = sj; y < sj + rn; y++) {
                  if (board[x][y] == num) return false;
            }
      }
      return true;
}

bool sudokusolver(vector<vector<int>> & board, int i, int j){
      if(i == board.size()){
            print(board);
            return true;
      }

      if(j == board.size()){
            return sudokusolver(board, i+1, 0);
      }

      if(board[i][j]){
            return sudokusolver(board, i, j+1);
      }

      for(int num=1;num<=9;num++){
            if(isValid(board, i, j, num)){
                  board[i][j] = num;
                  bool subans = sudokusolver(board, i, j+1);
                  if(subans) return true;
                  else board[i][j] = 0;
            }
      }
      return false;
}
int main(){
      int n = 9;
      vector<vector<int>> board = {
            {5, 3, 0, 0, 7, 0, 0, 0, 0},
            {6, 0, 0, 1, 9, 5, 0, 0, 0},
            {0, 9, 8, 0, 0, 0, 0, 6, 0},
            {8, 0, 0, 0, 6, 0, 0, 0, 3},
            {4, 0, 0, 8, 0, 3, 0, 0, 1},
            {7, 0, 0, 0, 2, 0, 0, 0, 6},
            {0, 6, 0, 0, 0, 0, 2, 8, 0},
            {0, 0, 0, 4, 1, 9, 0, 0, 5},
            {0, 0, 0, 0, 8, 0, 0, 7, 9}
      };
      sudokusolver(board, 0, 0);
      return 0;
};

