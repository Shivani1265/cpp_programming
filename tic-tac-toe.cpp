#include <iostream>
#include <vector>

using namespace std;

// Function prototypes
void printBoard(const vector<vector<char>>& board);
bool checkWin(const vector<vector<char>>& board, char player);
bool isBoardFull(const vector<vector<char>>& board);

int main() {
    // Initialize the board
    vector<vector<char>> board(3, vector<char>(3, ' '));
    char currentPlayer = 'X';
    bool gameEnded = false;
   
    while (!gameEnded) {
        // Print the board
        printBoard(board);
       
        // Take user input
        int row, col;
        cout << "Player " << currentPlayer << ", enter your move (row ): ";
        cin >> row ;
        cout << "Player " << currentPlayer << ", enter your move (column ): ";
         cin >> col;
        // Validate input
        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
            cout << "Invalid move. Try again." << endl;
            continue;
        }
       
        // Make the move
        board[row][col] = currentPlayer;
       
        // Check for a win or a draw
        if (checkWin(board, currentPlayer)) {
            printBoard(board);
            cout << "Player " << currentPlayer << " wins!" << endl;
            gameEnded = true;
        } else if (isBoardFull(board)) {
            printBoard(board);
            cout << "It's a draw!" << endl;
            gameEnded = true;
        } else {
            // Switch player
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
    }
   
    return 0;
}

// Function to print the board
void printBoard(const vector<vector<char>>& board) {
    cout << "  0 1 2" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << i << " ";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j];
            if (j < 2) cout << "|";
        }
        cout << endl;
        if (i < 2) cout << "  -----" << endl;
    }
}

// Function to check if a player has won
bool checkWin(const vector<vector<char>>& board, char player) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }
   
    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }
   
    return false;
}

// Function to check if the board is full
bool isBoardFull(const vector<vector<char>>& board) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') return false;
        }
    }
    return true;
}
