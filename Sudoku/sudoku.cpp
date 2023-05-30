#include <iostream>
#include <bitset>
using namespace std;

const int N = 9;
const int missing = 0;

bool isValid(int sudoku[N][N], int row, int col, int num) {
    // Check if num is already present in the row
    for (int i = 0; i < N; i++) {
        if (sudoku[row][i] == num) {
            return false;
        }
    }
    // Check if num is already present in the column
    for (int i = 0; i < N; i++) {
        if (sudoku[i][col] == num) {
            return false;
        }
    }
    // Check if num is already present in the 3x3 box
    int boxRow = row - row % 3;
    int boxCol = col - col % 3;
    for (int i = boxRow; i < boxRow + 3; i++) {
        for (int j = boxCol; j < boxCol + 3; j++) {
            if (sudoku[i][j] == num) {
                return false;
            }
        }
    }
    return true;
}

bool missinglocation(int sudoku[N][N], int& row, int& col) {
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (sudoku[row][col] == missing) {
                return true;
            }
        }
    }
    return false;
}

bool Solver(int sudoku[N][N]) {
    int row, col;
    if (!missinglocation(sudoku, row, col)) {
        // No missing number found, Sudoku is solved
        return true;
    }
    for (int num = 1; num <= 9; num++) {
        if (isValid(sudoku, row, col, num)) {
            sudoku[row][col] = num;
            if (Solver(sudoku)) {
                return true;
            }
            sudoku[row][col] = missing;
        }
    }
    return false;
}

void printGrid(int sudoku[N][N]) {
    for (int i = ```
