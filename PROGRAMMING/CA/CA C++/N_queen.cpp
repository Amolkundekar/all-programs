#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> board;  // Vector to store the positions of the queens on the board
int n;  // Size of the board

// Function to check whether it is safe to place a queen at the current position
bool isSafe(int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i] == col || abs(board[i] - col) == abs(i - row)) {
            return false;
        }
    }
    return true;
}

// Function to place the queens on the board
void placeQueens(int row) {
    if (row == n) {  // If all queens have been placed, print the board
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i] == j) {
                    cout << "Q ";
                } else {
                    cout << ". ";
                }
            }
            cout << endl;
        }
        cout << endl;
        return;
    }
    for (int i = 0; i < n; i++) {  // Try placing a queen in each column of the current row
        if (isSafe(row, i)) {
            board[row] = i;
            placeQueens(row + 1);  // Move on to the next row
        }
    }
}

int main() {
    cout << "Enter the size of the board: ";
    cin >> n;
    board.resize(n);
    placeQueens(0);  // Call the placeQueens function to place the queens on the board
    return 0;
}

