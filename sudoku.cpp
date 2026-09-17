#include <iostream>

using namespace std;

// Size of the Sudoku grid (9x9)
const int N = 9;

// Sample Sudoku Board (0 represents an empty cell)
int board[N][N] = {
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

// Function to print the Sudoku board
void printBoard() {
    cout << "\n-------------------------\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j == 0) cout << "| ";
            if (board[i][j] == 0)
                cout << ". ";
            else
                cout << board[i][j] << " ";
            
            if ((j + 1) % 3 == 0) cout << "| ";
        }
        cout << "\n";
        if ((i + 1) % 3 == 0)
            cout << "-------------------------\n";
    }
}

// Function to check if placing a number is valid
bool isValid(int row, int col, int num) {
    // Check row and column
    for (int x = 0; x < N; x++) {
        if (board[row][x] == num || board[x][col] == num)
            return false;
    }

    // Check 3x3 subgrid
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i + startRow][j + startCol] == num)
                return false;
        }
    }

    return true;
}

// Function to check if the board is completely filled
bool isFull() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i][j] == 0) return false;
        }
    }
    return true;
}

int main() {
    int row, col, num;

    cout << "=== C++ SUDOKU GAME ===" << endl;

    while (!isFull()) {
        printBoard();
        
        cout << "\nEnter your move (Row[1-9] Col[1-9] Num[1-9]): ";
        cin >> row >> col >> num;

        // Convert 1-based user input to 0-based array index
        row--; 
        col--;

        // Input boundary validation
        if (row < 0 || row >= N || col < 0 || col >= N || num < 1 || num > N) {
            cout << "Invalid input! Please enter numbers between 1 and 9.\n";
            continue;
        }

        // Check if cell is already occupied
        if (board[row][col] != 0) {
            cout << "Cell already occupied! Choose a different spot.\n";
            continue;
        }

        // Validate move based on Sudoku rules
        if (isValid(row, col, num)) {
            board[row][col] = num;
            cout << "Valid move!\n";
        } else {
            cout << "Invalid placement for " << num << " at that location. Try again!\n";
        }
    }

    printBoard();
    cout << "\nCongratulations! You solved the Sudoku puzzle!\n";

    return 0;
}