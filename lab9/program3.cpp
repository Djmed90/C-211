#include <iostream>
#include <vector>

bool correct(std::vector<std::vector<int>>& board, int row, int col, int N){
    // THis is for checking if it hits another queen
    //This checks column
    for(int i = 0; i < row; ++i){
        if(board[i][col] == 1){
            return false;
        }
    }
    // This checks diagonals
    for(int i = row, j = col; i >= 0 && j >= 0; --i, --j){
        if(board[i][j] == 1){
            return false;
        }
    }

    for( int i = row, j = col; i >= 0 && j < N; --i, ++j){
        if(board[i][j] == 1){
            return false;
        }
    }
    return true;
}

bool placeQueens(std::vector<std::vector<int>>& board, int row, int N){
    if(row >= N){
        return true;
    }
    for(int i = 0; i < N; ++i){
        if(correct(board, row, i, N)){
            board[row][i] = 1;

            if(placeQueens(board, row + 1, N)){
                return true;
            }
            board[row][i] = 0; // THis is for backtrack
        }
    }
    // if queen cant be placed
    return false;
}

void printBoard(std::vector<std::vector<int>>& board, int N) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if(board[i][j] == 1){
                std::cout << "Q" << " ";
            }
            else{
                std::cout << board[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }
}

int main(){
    int N;
    std::cin >> N;
   std::vector<std::vector<int>> board(N, std::vector<int>(N, 0));
    if (placeQueens(board, 0, N)) {
        printBoard(board, N);
    } else {
        std::cout << "This size cannot work";
    }
    return 0;
}